# 6
# -
# By iterating each row i-th times
# 1. Find the max_value in the i-th column
# 2. Get the row index where the max_value is
# 3. Replace all of the values (to the right) but the max_value, with 0s
# 4. Swap row[i] position with the max_value row, to the i-th position

def get_matrix(n):
  matrix = []
  for i in range(n):
    row = []
    for element in range(n):
      row.append(int(input(f"Ingrese elemento {element+1} de la fila {i+1}: ")))
    matrix.append(row)

  return matrix

def process(matrix):
  for i in range(len(matrix)):
    # Find the max value in the i-th column
    active_col = [row[i] for row in matrix]
    max_value = max(active_col)

    # Get the row index where the max value is
    j_index = active_col.index(max_value)
    j = matrix[j_index]
    for position in range(len(j)):
      # Replace all of the values to the right of the max value, with 0
      if (position > i) and (j[position] is not max_value):
        j[position] = 0

    # Swap row[i] position, with the row that has the max value
    matrix[i], matrix[j_index] = j, matrix[i]

  return matrix

def main():
  # n = int(input("Ingrese n: "))
  # matrix = get_matrix(n)

  matrix = [[2, 7, 6], [4, 5, 3], [9, 8, 1]]

  print("Old Matrix: ")
  for row in matrix: print(row)

  output_matrix = process(matrix)

  print("\nProcessed Matrix: ")
  for row in output_matrix: print(row)

main()
