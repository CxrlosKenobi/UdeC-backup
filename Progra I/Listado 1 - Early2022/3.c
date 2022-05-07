// Solución propia
#include <stdio.h>
#include <math.h> /* Run with -lm */

int main() {
  int i, j, k;
  printf("num1> ");
  scanf("%d", &i);
  printf("num2> ");
  scanf("%d", &j);
  printf("num3> ");
  scanf("%d", &k);

  printf("\n");
  if ((i + j) < (pow(k, 2) / i)) {
    printf("Cumple invariante\n");
  }

  return 0;
}
