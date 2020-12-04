from colorama import init
from colorama import Fore
import os
import time
import string
import random
init(autoreset=True)

os.system('clear') # Limpiando la terminal antes de comenzar
key = 'AEBCDEabcde' # Para verificación o testeo

def ans(R, i): # R(Revisar); i(Current question)
    current = i
    user[i] = input('')#random.choice(response)
    return user
user = ans()

def Scott(i): # Quien recibe de input las respuestas; Mandarlas a un CSV file
    current = i
    user = dict()
    print(Fore.WHITE + '\n\tResponder con [ABCDE] e ingresa R para cambiar una respuesta')
    ans = input(Fore.WHITE + 'Respuesta\n> ')
    if (ans == 'R') and (current > 1): # Corregir respuesta
        r = int(input(Fore.YELLOW + '\tCorregir la número\n> '))
        r_ans = input(Fore.WHITE + f'Corección ({r})\n> ')
        user[r] = r_ans
        print(Fore.GREEN + '[ ok ] Corregido')
        time.sleep(0.3)
    elif ans in key: # Registrar respuesta
        user[i] = ans
        return user

def hoja(user):
    print('\n')
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
    print('\n\n')

hoja(user)
