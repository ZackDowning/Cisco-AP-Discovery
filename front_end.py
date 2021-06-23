from discovery import (discovery, ap_list_full)
from general import (mgmt_ip_addresses, output_to_file, output_failed_to_file)
from getpass import getpass
import time

try:
    input(
        '   _____ _                            _____        _____  _                                   \n'
        '  / ____(_)                     /\\   |  __ \\      |  __ \\(_)                                  \n'
        ' | |     _ ___  ___ ___ ______ /  \\  | |__) |_____| |  | |_ ___  ___ _____   _____ _ __ _   _ \n'
        " | |    | / __|/ __/ _ \\______/ /\\ \\ |  ___/______| |  | | / __|/ __/ _ \\ \\ / / _ \\ '__| | | |\n"
        ' | |____| \\__ \\ (_| (_) |    / ____ \\| |          | |__| | \\__ \\ (_| (_) \\ V /  __/ |  | |_| |\n'
        '  \\_____|_|___/\\___\\___/    /_/    \\_\\_|          |_____/|_|___/\\___\\___/ \\_/ \\___|_|   \\__, |\n'
        '   ============================                                                          __/ |\n'
        '   | Compiled by Zack Downing |                                                         |___/ \n'
        '   ============================\n\n'
        'Create file named "MGMT.txt" containing list of management IP addresses for AP discovery within "Inputs" fold'
        'er.\n'
        'Press Enter once complete\n'
    )
    mgmt_ip_list = mgmt_ip_addresses('Inputs/MGMT.txt')
    username = input('Enter Network Username: ')
    password = getpass('Enter Network Password: ')
    print('Starting Discovery...')
    start = time.perf_counter()
    discovery_dict = discovery(mgmt_ip_list, username, password)
    output_to_file(ap_list_full(discovery_dict['successful']), 'Outputs/ap_discovery.csv')
    output_failed_to_file(discovery_dict['failed'], 'Outputs/failed_devices.csv')
    end = time.perf_counter()
    input(f'Finished in {int(round(end - start, 0))} seconds\n'
          '"ap_discovery.csv" and "failed_devices.csv" files generated in "Outputs" folder.\n'
          'Press Enter to end.\n')
except KeyboardInterrupt:
    try:
        input('\nDiscovery canceled by keyboard interrupt.\n'
              'Press Enter to end.\n')
    except KeyboardInterrupt:
        print('\nForced exit.')
        pass
except Exception as exception:
    try:
        input('\nDiscovery canceled by unknown exception:\n\n'
              f'{exception}\n'
              'Press Enter to end.\n')
    except KeyboardInterrupt:
        print('\nForced exit.')
        pass
