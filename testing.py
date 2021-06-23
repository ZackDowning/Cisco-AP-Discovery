from general import connection
from getpass import getpass
from func_timeout import (func_timeout, FunctionTimedOut)

ip_address = input('IP Address: ')
username = input('Username: ')
password = getpass('Password: ')

try:
    func_timeout(3, connection, args=(ip_address, username, password))
except FunctionTimedOut:
    print('Timed out')
