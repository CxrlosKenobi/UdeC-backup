#include <stdio.h>

int main() {
  int n;
  printf("> ");
  scanf("%d", &n);

  int sum = 0;
  while (n > 0) {
    sum += n % 10; // Hacer el modulo 10 para obtener el ultimo digito;
    n /= 10; // Hacer la division entera para quitar el ultimo digito
  }

  printf("%d\n", sum);
}
