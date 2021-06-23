from general import connection
from func_timeout import (func_timeout, FunctionTimedOut)
import concurrent.futures


# Discovers APs on device and returns list of dictionary for individual APs
# [{
#         'hostname'
#         'mgmt_ip'
#         'platform'
#         'r_intf'
#         'l_intf'
#         'software'
#     }]
def ap_discovery(session):
    cdp_neighbors = session.send_command('show cdp neighbor detail', use_textfsm=True)
    aps = []
    for neighbor in cdp_neighbors:
        if neighbor['capabilities'].__contains__('Trans-Bridge'):
            software_version = neighbor['software_version']
            for software in neighbor['software_version'].split(','):
                if software.__contains__('Version'):
                    software_version = software.split('Version')
                    software_version = software_version[1]
                    if software_version.__contains__(':'):
                        software_version = software_version.replace(': ', '')
                    else:
                        software_version = software_version.replace(' ', '')
            if neighbor['platform'].__contains__('cisco '):
                platform = neighbor['platform'].replace('cisco ', '')
            else:
                platform = neighbor['platform']
            ap = {
                'hostname': neighbor['destination_host'],
                'mgmt_ip': neighbor['management_ip'],
                'platform': platform,
                'r_intf': neighbor['remote_port'],
                'l_intf': neighbor['local_port'],
                'software': software_version
            }
            aps.append(ap)
    return aps


# Runs discovery on list of management IP addresses and provided username/password combo
# returns Dictionary with..
# {
#     'successful': [
#         {
#             'hostname'
#             'ip_address'
#             'connectivity'
#             'authentication'
#             'authorization'
#             'con_type'
#             'aps' (See 'ap_discovery' function),
#             'exception'
#         }
#     ],
#     'failed': [
#         {
#             'ip_address'
#             'connectivity'
#             'authentication'
#             'authorization'
#             'con_type'
#             'exception'
#         }
#     ]
# }
def discovery(mgmt_ip_addresses, username, password):
    devices = {
        'successful': [],
        'failed': []
    }

    def multithread(ip_address):
        try:
            conn = func_timeout(60, connection, args=(ip_address, username, password))
            session = conn['session']
            connectivity = conn['connectivity']
            authentication = conn['authentication']
            authorization = conn['authorization']
            con_type = conn['con_type']
            exception = conn['exception']
            if connectivity:
                c = 'Success'
            else:
                c = 'Failed'
            if authentication:
                ae = 'Success'
            else:
                ae = 'Failed'
            if authorization:
                ao = 'Success'
            else:
                ao = 'Failed'
            if authorization:
                hostname = conn['hostname']
                print(f'Device: {ip_address} - {hostname}\n'
                      '      Connectivity: Success\n'
                      '      Authentication: Success\n'
                      '      Authorization: Success\n')
                ap_list = ap_discovery(session)
                device = {
                    'hostname': hostname,
                    'ip_address': ip_address,
                    'connectivity': connectivity,
                    'authentication': authentication,
                    'authorization': authorization,
                    'con_type': con_type,
                    'aps': ap_list,
                    'exception': exception
                }
                devices['successful'].append(device)
            else:
                print(f'Device: {ip_address}\n'
                      f'      Connectivity: {c}\n'
                      f'      Authentication: {ae}\n'
                      f'      Authentication: {ao}\n')
                device = {
                    'ip_address': ip_address,
                    'connectivity': connectivity,
                    'authentication': authentication,
                    'authorization': authorization,
                    'con_type': con_type,
                    'exception': exception
                }
                devices['failed'].append(device)
        except FunctionTimedOut:
            connectivity = False
            authentication = False
            authorization = False
            con_type = 'NULL'
            exception = 'FunctionTimedOut'
            print(f'Device: {ip_address}\n'
                  '      Connectivity: Failed\n'
                  '      Authentication: Failed\n'
                  '      Authorization: Failed\n')
            device = {
                'ip_address': ip_address,
                'connectivity': connectivity,
                'authentication': authentication,
                'authorization': authorization,
                'con_type': con_type,
                'exception': exception
            }
            devices['failed'].append(device)

    executor = concurrent.futures.ThreadPoolExecutor(len(mgmt_ip_addresses))
    futures = [executor.submit(multithread, address) for address in mgmt_ip_addresses]
    concurrent.futures.wait(futures)
    return devices


# Creates list of dictionaries for each AP
# Returns...
# {
#     'ap_hostname'
#     'ap_mgmt_ip'
#     'ap_platform'
#     'r_intf' (to sw)
#     'l_intf' (to sw)
#     'ap_software'
#     'sw_hostname'
#     'sw_mgmt_ip'
# }
def ap_list_full(discovery_list):
    aps = []
    for device in discovery_list:
        for ap in device['aps']:
            ap_dict = {
                'ap_hostname': ap['hostname'],
                'ap_mgmt_ip': ap['mgmt_ip'],
                'ap_platform': ap['platform'],
                'r_intf': ap['r_intf'],
                'l_intf': ap['l_intf'],
                'ap_software': ap['software'],
                'sw_hostname': device['hostname'],
                'sw_mgmt_ip': device['ip_address']
            }
            aps.append(ap_dict)
    return aps
