from general import connection
from getpass import getpass
from discovery import ap_discovery
# from func_timeout import (func_timeout, FunctionTimedOut)

ip_address = input('IP Address: ')
username = input('Username: ')
password = getpass('Password: ')

print(ap_discovery(connection(ip_address, username, password)['session']))
