// Solucion única
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cuentaRepeticions(char *palabra, int tam, char c);

int main() {
  char *palabra = "Multiverso";
  int tam = strlen(palabra);
  char c = 'o';

  printf("%d\n", cuentaRepeticions(palabra, tam, c));

  return 0;
}

int cuentaRepeticions(char *palabra, int tam, char c) {
  if (tam == 0) return 0;
  if (palabra[tam - 1] == c) return 1 + cuentaRepeticions(palabra, tam - 1, c);
  return cuentaRepeticions(palabra, tam - 1, c);
}
