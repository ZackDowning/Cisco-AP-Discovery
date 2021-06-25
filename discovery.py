from general import connection
# from func_timeout import (func_timeout, FunctionTimedOut)
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
        conn = connection(ip_address, username, password)
        session = conn['session']
        connectivity = conn['connectivity']
        authentication = conn['authentication']
        authorization = conn['authorization']
        con_type = conn['con_type']
        exception = conn['exception']
        if authorization:
            hostname = conn['hostname']
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
            device = {
                'ip_address': ip_address,
                'connectivity': connectivity,
                'authentication': authentication,
                'authorization': authorization,
                'con_type': con_type,
                'exception': exception
            }
            devices['failed'].append(device)

    # This accounts for bug in Windows pyinstaller Application
    bug = True
    bug_msg = 0
    while bug:
        devices = {
            'successful': [],
            'failed': []
        }
        executor = concurrent.futures.ThreadPoolExecutor(50)
        futures = [executor.submit(multithread, address) for address in mgmt_ip_addresses]
        concurrent.futures.wait(futures, timeout=None)
        successful = len(devices['successful'])
        failed = len(devices['failed'])
        if (successful + failed) != len(mgmt_ip_addresses):
            if bug_msg == 0:
                print('Taking longer than expected due to Windows OS bug...\n')
            else:
                print('Working...')
            bug_msg += 1
            bug = True
        else:
            if successful != 0:
                print('\nSuccessful devices:')
                for device_s in devices['successful']:
                    print(f"{device_s['ip_address']}: {device_s['hostname']}")
            if failed != 0:
                print('\nFailed devices:')
                for device_f in devices['failed']:
                    print(f"{device_f['ip_address']}")
                print('\nSee "failed_devices.csv" in "Outputs" folder for failed connection details.\n')
            bug = False

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
