// Solución única
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mayor(int n, int *v);

int main() {
  int n = 5;
  int *v = malloc(n * sizeof(int));
  v[0] = 1; v[1] = 2; v[2] = 3; v[3] = 4; v[4] = 5;

  printf("%d\n", mayor(n, v));

  return 0;
}

int mayor(int n, int *v) {
  if (n == 1) return v[0];
  if (v[n - 1] > mayor(n - 1, v)) return v[n - 1];
  return mayor(n - 1, v);
}
