// Solución propia
#include <stdio.h>

int power(int n);

int main() {
  int n;
  scanf("%d", &n);
  if (n < 0) return 1;

  for(int i = 0; i <= n; i++) {
    printf("2^%d = %d\n", i, power(i));
  }

  return 0;
}

int power(int n) {
  int output = 1;
  while(n--)
    output *= 2;

  return output;
}
