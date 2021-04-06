from math import *
import time

def main():
    # Distancia en km de ciudades
    print('\tIngrese la distancia entre ciudades (km)')
    distancia = float(input('Distancia: '))

    # Mediciones 
    print('\n\tMedicion 1: ')
    objVertical = float(input('Alto: '))
    sombra = float(input('Sombra: '))

    print('\n\tMedicion 2: ')
    objVertical2 = float(input('Alto: '))
    sombra2 = float(input('Sombra: ')) 

    # Arco tangente para obtener los ángulos de depresión
    alfa = degrees(atan(sombra/objVertical))
    beta = degrees(atan(sombra2/objVertical2))

    # Utilizando la fórmula del perimetro de una circunferencia obtenemos luego el radio
    perimetro = (distancia*360)/abs(alfa-beta)
    radio = perimetro/(2*pi)

    print(f'\n\tRadio de la Tierra: \n> {radio}km.')
    time.sleep(2)
    print('\n\tVariables utilizadas en el cálculo, para su verificación:')
    print(f'alfa: {alfa} ; beta: {beta}')
    print(f'Perimetro = {distancia*360} / {abs(alfa-beta)}')
    print(f'Radio = {perimetro} / {2*pi}\n')
main()

## Ejemplo:
#         Ingrese la distancia entre ciudades (km)
# Distancia: 300
#
#         Medicion 1:
# Alto: 30
# Sombra: 28
# 
#         Medicion 2:
# Alto: 33
# Sombra: 34
# 
#         Radio de la Tierra:
# > 6073.690140153813km.
