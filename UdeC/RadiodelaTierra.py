from math import *

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

main()