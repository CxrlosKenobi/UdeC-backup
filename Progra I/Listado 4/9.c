// Solución única
#include <stdio.h>

void modificarMatrix(int n, int m, int mat1[n][m]);

int main() {
  int n = 3, m = 3;
  int matrix[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
  };

  modificarMatrix(n, m, matrix);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%d ", matrix[i][j]);

    printf("\n");
  }

  return 0;
}

void modificarMatrix(int n, int m, int mat1[n][m]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      if (mat1[i][j] == 1)
        mat1[i][j] = -1;
  }
}
