// Solución propia
#include <stdio.h>

int main() {
  int i, j;
  printf("num1> ");
  scanf("%d", &i);
  printf("num2> ");
  scanf("%d", &j);

  printf("\n");
  if ((i < 0) && (j < 0)) {
    int aux;
    aux = i;
    i = j;
    j = aux;

    printf("i: %d\n", i);
    printf("j: %d\n", j);

  } else {
    printf("i: %d\n", i);
    printf("j: %d\n", j);
  }

  return 0;
}
