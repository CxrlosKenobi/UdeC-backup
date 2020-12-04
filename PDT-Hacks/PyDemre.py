from colorama import init
from colorama import Fore
import os
import time
import string
import random
init(autoreset=True)

os.system('clear') # Limpiando la terminal antes de comenzar
response = 'AEBCDE' # Para verificación

def ans():
    user = dict()
    for i in range(1,66): # Creando las variables que guardan las respuestas
        user[i] = random.choice(response)
    return user
user = ans()
def hoja(user):
#################################
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
#################################

hoja(user)
