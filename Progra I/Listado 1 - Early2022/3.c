#include <stdio.h>
#include <math.h> /* Run with -lm */

int main() {
  int i, j, k;
  printf("> ");
  scanf("%d", &i);
  printf("> ");
  scanf("%d", &j);
  printf("> ");
  scanf("%d", &k);

  printf("\n");
  if ((i + j) < (pow(k, 2) / i)) {
    printf("Cumple invariante\n");
  }

  return 0;
}
