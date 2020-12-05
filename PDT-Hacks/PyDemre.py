##                          ##
#  Creado por @CxrlosKenobi  #
##     Para ensayos PDT     ##

# Timer
# Porcentaje que lleva

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
    return user
user = init()

def Scott(user, i): # Quien recibe de input las respuestas; Mandarlas a un CSV file
    current = i
    key = 'A E B C D E a b c d e' # Para verificación o testeo
    print(Fore.WHITE + '\n\tResponder con [ABCDE] e ingresa R para cambiar una respuesta')
    ans = input(Fore.WHITE + f'Respuesta ({i})\n> ')
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

def timer():
    h = 2
    m = 30
    s = 1
    fulltime = (h*3600) + (m*60) + s
    for i in range(fulltime):
    #while (s != 00) and (m != 00) and (h != 0):
        s -= 1
        time.sleep(1)
        if s == 00:
            m -= 1
        if m == 00:
            h -= 1
        print(Fore.GREEN + f'\t{h}:{m}:{s}' + Fore.WHITE)
    timeout = True
    return timeout

def saver(user):
    with open('responses.csv','a') as f:
        w = csv.writer(f)
        w.writerows(user.items())
def backup():
    os.system('mkdir temp_backup')
    

def main():
    #Pantallita de bienvenida; Créditos; Ascii; etc
    cleaner()
    init()
    for i in range(1,66):
        hoja(user, i)
        Scott(user, i)
        cleaner()
    saver(user)
if __name__ == '__main__':
    main()
