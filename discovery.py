from general import connection
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
        if neighbor['capabilities'].__contains__('Bridge'):
            software_version = neighbor['software_version']
            for software in neighbor['software_version'].split(','):
                if software.__contains__('Version'):
                    software_version = software.replace('Version ', '')
            ap = {
                'hostname': neighbor['destination_host'],
                'mgmt_ip': neighbor['management_ip'],
                'platform': neighbor['platform'],
                'r_intf': neighbor['remote_port'],
                'l_intf': neighbor['local_port'],
                'software': software_version
            }
            aps.append(ap)
    return aps


# Runs discovery on list of management IP addresses
# returns Dictionary with..
# {
#     'successful': [
#         {
#             'hostname': hostname,
#             'ip_address': ip_address,
#             'connectivity': connectivity,
#             'authentication': authentication,
#             'authorization': authorization,
#             'con_type': con_type,
#             'aps': ap_discovery (See 'ap_discovery' function),
#             'exception': exception
#         }
#     ],
#     'failed': [
#         'x.x.x.x',
#         'x.x.x.x'
#     ]
# }
def discovery(mgmt_ip_addresses, username, password):
    devices = {
        'successful': [],
        'failed': []
    }

    def multithread(ip_address):
        conn = connection(ip_address, username, password)
        hostname = ''
        ap_list = ''
        session = conn['session']
        connectivity = conn['connectivity']
        authentication = conn['authentication']
        authorization = conn['authorization']
        con_type = conn['con_type']
        exception = conn['exception']
        if authorization:
            hostname = conn['hostname']
            print(f'Device: {ip_address} - {hostname}\n'
                  '      Connectivity: Success\n'
                  '      Authentication & Authorization: Success\n')
            ap_list = ap_discovery(session)
        else:
            devices['failed_switches'].append(ip_address)
            print(f'Device: {ip_address}')
            if connectivity is not True:
                print('      Connectivity: Failed')
            if authentication is not True:
                print('      Authentication: Failed')
            if authorization is not True:
                print('      Authorization: Failed')
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
        devices['discovery'].append(device)

    executor = concurrent.futures.ThreadPoolExecutor(50)
    futures = [executor.submit(multithread, address) for address in mgmt_ip_addresses]
    concurrent.futures.wait(futures)

    return devices
