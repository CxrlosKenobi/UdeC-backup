##                          ##
#  Creado por @CxrlosKenobi  #
##     Para ensayos PDT      #

#Agregar Timer
#Luego perfeccionar y optimizar código para sacar la Release 1.0
from colorama import init, Fore, Back, Style
from scoresTable import *
import os
import time
import string
import random
import csv

#import cgitb
#cgitb.enable()
#cgitb.enable(display=0, logdir="/path/to/logdir")
init(autoreset=True)

def cleaner():
    os.system('clear')

def init(sheet, user):
    for i in range(1,66):
        user[i] = '-'
        sheet[i] = '!'
    print('\t')
    #gnome-terminal --title="Dev Server" --command="bash -c 'python3 test.py; $SHELL'"
    #os.system('gnome-terminal --title="Timer by @kenobi" --command="bash -c 'python3 test.py'"')
    #os.system('gnome-terminal /home/kenobi/GitHub/CodeUtilities/PDT-Hacks/time.command')
    return user

# Full-range variables
sheet = dict()
user = dict()
user_checked = user

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
        user[i] = ans
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

def sheets(sheet, i):
    print('\n')
    print(Fore.CYAN + f'Progreso: {round((i/65)*100)} %'+ Fore.WHITE + '\n')
    tab = '      ' # Var aux
    for row in range(1,16): # Preguntas de la 1-60
        for j in range(2,21,30):
            print(f'\
            {str(row).zfill(2)}) '+ sheet[row] +f'{tab}\
            {row+15}) '+ sheet[row+15] + f'{tab}\
            {row+30}) '+ sheet[row+30] + f'{tab}\
            {row+45}) '+ sheet[row+45] + f'{tab}')
    print('')
    for row in range(61, 66): # Preguntas de la 61-65
        print(f'\
            {row}) '+ sheet[row], end='')
    print('\n')

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

def verify(sheet, user):
    tab = '                '
    prev = input('\n¿Usar hoja de respuestas anterior? (Y/N)\n> ')
    if prev == 'Y':
        with open('sheet.csv') as f:
            lis = [line.split(',') for line in f]
            for i, x in enumerate(lis):
                sheet[i] = f'{x[1]}'
    elif prev == 'N':
        cleaner()
        for i in range(1, 66):
            print('\t### PAUTA DE RESPUESTAS ###')
            sheets(sheet, i)
            ans = input(f'({i}) Respuesta :\n> ')
            sheet[i] = ans
            cleaner()
            with open('sheet.csv', 'w') as f:
                w = csv.writer(f)
                w.writerows(sheet.items())
    else:
        print('\nExiting...')
        time.sleep(0.3)
    buenas = []
    malas = []
    piloto = []
    for i in range(5):
        ran = random.randint(1,66)
        piloto.append(ran)
    for i in range(1, 66):
        if i in piloto:
            pass
        elif user[i] == sheet[i]:
            buenas.append(i)
        elif user[i] != sheet[i]:
            malas.append(i)
    for i in range(1,66):
        if i in piloto:
            user_checked[i] = '-'
        elif i in buenas:
            user_checked[i] = (Back.GREEN + user_checked[i] + Style.RESET_ALL)
        elif i in malas:
            user_checked[i] = (Back.RED + user_checked[i] + Style.RESET_ALL)
    print('\nBuenas : ' + Back.GREEN + f'{len(buenas)}' + Style.RESET_ALL, end='')
    print(f'{tab}Malas  : ' + Back.RED + f'{len(malas)}' + Style.RESET_ALL, end='')
    print(f'{tab}Piloto : ' + '-')
    print(f'\nPuntaje: {score[len(buenas)]}\n')
    return user_checked

def uChecked(user_checked):
    tab = '      ' # Var aux
    for row in range(1,16): # Preguntas de la 1-60
        for j in range(2,21,30):
            print(f'\
            {str(row).zfill(2)}) '+ user_checked[row] +f'{tab}\
            {row+15}) '+ user_checked[row+15] + f'{tab}\
            {row+30}) '+ user_checked[row+30] + f'{tab}\
            {row+45}) '+ user_checked[row+45] + f'{tab}')
    print('')
    for row in range(61, 66): # Preguntas de la 61-65
        print(f'\
            {row}) '+ user_checked[row], end='')
    print('\n')

def main():
    #Pantallita de bienvenida; Créditos; Ascii; etc
    cleaner()
    init(sheet, user)
    for i in range(1,66):
        hoja(user, i)
        Scott(user, i)
        init_backup(user)
        cleaner()
    saver(user)
    end_backup()
    cleaner()
    verify(sheet, user)
    uChecked(user_checked)

if __name__ == '__main__':
    main()
