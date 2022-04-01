// Solución propia
#include <stdio.h>

int main() {
  int i, j;
  printf("num1> ");
  scanf("%d", &i);
  printf("num2> ");
  scanf("%d", &j);

  (i < j) 
    ? printf("%d\n", i * 2)
    : printf("%d\n", j * 2);

  return 0;
}
