from netmiko import ConnectHandler
from netmiko import ssh_exception
from netmiko import SSHDetect
from address_validator import ipv4
import os

os.environ['NET_TEXTFSM'] = './working-files/templates'


# Checks and waits for validity of individual IP address in MGMT.txt file and returns list of IP addresses once valid
def mgmt_ip_addresses(mgmt_file):
    print('Validating "MGMT.txt" File...')
    valid_file = False
    mgmt_ips = []
    while valid_file is False:
        invalid_lines = 0
        line_num = 0
        invalid_ips = {
            'line_num': [],
            'ip_address': []
        }
        with open(mgmt_file) as file:
            for address in file:
                line_num += 1
                ip_address = str(address).strip('\n')
                if ipv4(ip_address) is False:
                    invalid_ips['line_num'].append(str(line_num))
                    invalid_ips['ip_address'].append(str(address))
                    invalid_lines += 1
                else:
                    mgmt_ips.append(ip_address)
        if invalid_lines == 0:
            valid_file = True
            print('"MGMT.txt" file validated.')
        else:
            print('Invalid MGMT.txt file entries:')
            for (line_n, ip_addr) in zip(invalid_ips['line_num'], invalid_ips['ip_address']):
                print(f'   Line {line_n} - {ip_addr}')
            input('\nPress Enter once "MGMT.txt" file is fixed.')
    return mgmt_ips


# Returns dictionary with..
# 'con_type': con_type,
# 'connectivity': connectivity,
# 'authentication': authentication,
# 'authorization': authorization,
# 'hostname': hostname,
# 'session': session,
# 'devicetype': devicetype,
# 'exception': exception
def connection(ip_address, username, password):
    ip_address = ip_address.strip(' ').strip('\n')
    device = {
        'device_type': 'autodetect',
        'ip': ip_address,
        'username': username,
        'password': password
    }
    hostname = ''
    con_type = 'NULL'
    exception = 'NULL'
    try:
        try:
            devicetype = SSHDetect(**device).autodetect()
            device['device_type'] = devicetype
            session = ConnectHandler(**device)
        except ValueError:
            try:
                device['device_type'] = 'cisco_ios'
                devicetype = 'cisco_ios'
                session = ConnectHandler(**device)
            except ValueError:
                device['device_type'] = 'cisco_ios'
                devicetype = 'cisco_ios'
                session = ConnectHandler(**device)
        showver = session.send_command('show version', use_textfsm=True)
        if showver.__contains__('Failed'):
            authorization = False
        else:
            hostname = showver[0]['hostname']
            authorization = True
        authentication = True
        connectivity = True
        con_type = 'SSH'
    except ConnectionRefusedError or ConnectionRefusedError or ValueError or ssh_exception.NetmikoTimeoutException or \
            ssh_exception.NetmikoAuthenticationException:
        try:
            device['device_type'] = 'cisco_ios_telnet'
            devicetype = 'cisco_ios_telnet'
            device['secret'] = password
            session = ConnectHandler(**device)
            showver = session.send_command('show version', use_textfsm=True)
            if showver.__contains__('Failed'):
                authorization = False
            else:
                hostname = showver[0]['hostname']
                authorization = True
            authentication = True
            connectivity = True
            con_type = 'TELNET'
        except ssh_exception.NetmikoTimeoutException:
            authentication = False
            authorization = False
            connectivity = False
            session = ''
            devicetype = ''
            exception = 'NetmikoTimeoutException'
        except ssh_exception.NetmikoAuthenticationException:
            authentication = False
            authorization = False
            connectivity = True
            session = ''
            devicetype = ''
            exception = 'NetmikoAuthenticationException'
        except TimeoutError:
            authentication = False
            authorization = False
            connectivity = False
            session = ''
            devicetype = ''
            exception = 'TimeoutError'
        except ConnectionRefusedError:
            authentication = False
            authorization = False
            connectivity = False
            session = ''
            devicetype = 'ConnectionRefusedError'
        except ValueError:
            authentication = False
            authorization = False
            connectivity = False
            session = ''
            devicetype = ''
            exception = 'ValueError'
    return {
        'con_type': con_type,
        'connectivity': connectivity,
        'authentication': authentication,
        'authorization': authorization,
        'hostname': hostname,
        'session': session,
        'devicetype': devicetype,
        'exception': exception
    }
