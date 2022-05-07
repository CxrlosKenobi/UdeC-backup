

# Ej 6
def leap(year): # a
  if (year % 100 == 0) and (year % 400 == 0):
    return f"{year} es bisiesto"

  # Checking that is not multiple of 100 but multiple of 4, because
  # if it is multiple of 100, it is not a leap year.
  elif (year % 4 == 0) and (year % 100 != 0):
    return f"{year} es bisiesto"

  else:
    return f"{year} no es bisiesto"


print(leap(int(input("Año: "))))














# Ej 7 aux 
def prod(list):
  product = 1
  for i in list:
    product *= i
  return product

# Ej 7
def siete():
  quantity = int(input("#N: "))
  numbers = []

  ## Input flow
  for i in range(quantity):
    n = int(input("> "))
    while n <= 0:
      print("Ingrese N > 0")
      n = int(input("> "))

    numbers.append(n)


  ## Output flow
  pairs = []
  odds = []
  for i in numbers:
    if i % 2 == 0:
      pairs.append(i)
    else:
      odds.append(i)
  
  print(f"{sum(pairs)} - {prod(odds)}")

# siete() 