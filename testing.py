from general import connection
from discovery import ap_check
from getpass import getpass

ip_address = input('IP Address: ')
username = input('Username: ')
password = getpass('Password: ')

ap_check(connection(ip_address, username, password)['session'])
