# List of solved excercises
from math import *

def three(x):
  # Get from input
  a, b, c, d = 0, 0, 0, 0

  return ( a*(x**3) + b*(x**2) + c*(x) + d )


def four():
  # Calculate the area of a triangle, with a given input
  # The input contains the coordinates (x1, y1; x2, y2) of one of its sides, and the size of its hypotenuse
  start = input("x1 y1: ").split()
  x1, y1 = int(start[0]), int(start[1])
  end = input("x2 y2: ").split()
  x2, y2 = int(end[0]), int(end[1])
  hyp = int(input("hyp: "))

  # Must return the area of the triangle
  c1 = sqrt((x1-x2)**2 + (y1-y2)**2) # Distance between the two points
  c2 = sqrt((hyp ** 2) - (c1 ** 2)) # Pythagorean theorem applied to a side

  return (c1 * c2) / 2


def five():
  data = {
    "RM": 0,
    "ZES": 0,
    "ZS": 0,
    "ZC": 0,
    "ZN": 0
  }
  
  # ...
