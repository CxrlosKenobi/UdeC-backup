##                          ##
#  Creado por @CxrlosKenobi  #
##     Para ensayos PDT      #

from colorama import init, Fore, Back, Style
import os
import time
import string
import random
import csv
init(autoreset=True)

def cleaner():
    os.system('clear')

def init():
    user = dict()
    for i in range(1,66):
        user[i] = '-'
    for i in range(5):
        time.sleep(0.2)
        print(Fore.GREEN + '[ ok ] Loading...' + Fore.WHITE)
    os.system('chmod +x time.command')
    os.system('gnome-terminal /home/kenobi/GitHub/CodeUtilities/PDT-Hacks/time.command')
    return user

# Full-range variables
user = init()

def Scott(user, i): # Quien recibe de input las respuestas; Mandarlas a un CSV file
    current = i
    key = 'A E B C D E a b c d e' # Para verificación o testeo
    print(Fore.WHITE + '\n\tResponder con [ABCDE] e ingresa R para cambiar una respuesta')
    try:
        ans = input(Fore.WHITE + f'Respuesta ({i})\n> ')
    except KeyboardInterrupt:
        print('')
        exit()
    if (ans == 'R') and (current > 1): # Corregir respuesta
        r = int(input(Fore.YELLOW + '\tCorregir la número\n> '))
        cleaner()
        hoja(user, i)
        r_ans = input(Fore.WHITE + f'Corección ({r})\n> ')
        user[r] = Fore.MAGENTA + r_ans + Fore.WHITE
        print(Fore.GREEN + '[ ok ] Corregido')
        time.sleep(0.4)
    elif ans in key: # Registrar respuesta
        user[i] = Fore.MAGENTA + ans + Fore.WHITE
        return user
    elif (ans == '' or len(ans) == 0 or len(ans) >= 2):
        user[i] = Fore.YELLOW + '_' + Fore.WHITE
    else:
        user[i] = Fore.YELLOW + '_' + Fore.WHITE

def hoja(user, i):
    print('\n')
    print(Fore.CYAN + f'Progreso: {round((i/65)*100)} %'+ Fore.WHITE + '\n')
    tab = '      ' # Var aux
    for row in range(1,16): # Preguntas de la 1-60
        for j in range(2,21,30):
            print(f'\
            {str(row).zfill(2)}) '+ user[row] +f'{tab}\
            {row+15}) '+ user[row+15] + f'{tab}\
            {row+30}) '+ user[row+30] + f'{tab}\
            {row+45}) '+ user[row+45] + f'{tab}')
    print('')
    for row in range(61, 66): # Preguntas de la 61-65
        print(f'\
            {row}) '+ user[row], end='')
    print('\n')
    timer()

def saver(user):
    with open('responses.csv','w') as f:
        w = csv.writer(f)
        w.writerows(user.items())

def init_backup(user):
    with open('responses_backup.csv', 'w') as f:
        w = csv.writer(f)
        w.writerows(user.items())

def end_backup():
    os.system('rm -rf responses_backup.csv')

def results():
    do = something

def hoja(user, i):
    print('\n')
    print(Fore.CYAN + f'Progreso: {round((i/65)*100)} %'+ Fore.WHITE + '\n')
    tab = '      ' # Var aux
    for row in range(1,16): # Preguntas de la 1-60
        for j in range(2,21,30):
            print(f'\
            {str(row).zfill(2)}) '+ user[row] +f'{tab}\
            {row+15}) '+ user[row+15] + f'{tab}\
            {row+30}) '+ user[row+30] + f'{tab}\
            {row+45}) '+ user[row+45] + f'{tab}')
    print('')
    for row in range(61, 66): # Preguntas de la 61-65
        print(f'\
            {row}) '+ user[row], end='')
    print('\n')

def main():
    #Pantallita de bienvenida; Créditos; Ascii; etc
    cleaner()
    init()
    for i in range(1,66):
        hoja(user, i)
        Scott(user, i)
        init_backup(user)
        cleaner()
    saver(user)
    end_backup()

if __name__ == '__main__':
    main()
