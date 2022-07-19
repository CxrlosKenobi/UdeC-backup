// Solucion única
#include <stdio.h>
#include <stdlib.h>

int busquedaBinaria(int *v, int elem, int limInferior, int limSuperior);

int main() {
  int n = 5;
  int *v = malloc(n * sizeof(int));
  v[0] = 7; v[1] = 8; v[2] = 9; v[3] = 10; v[4] = 11;
  int elem = 9;
  int limInferior = 0;
  int limSuperior = n - 1;
  int pos = busquedaBinaria(v, elem, limInferior, limSuperior);

  printf("%d\n", pos);

  return 0;
}

int busquedaBinaria(int *v, int elem, int limInferior, int limSuperior) {
  if (limInferior > limSuperior) return -1;
  int mitad = (limInferior + limSuperior) / 2;
  if (v[mitad] == elem) return mitad;
  if (v[mitad] > elem) return busquedaBinaria(v, elem, limInferior, mitad - 1);

  return busquedaBinaria(v, elem, mitad + 1, limSuperior);
}
