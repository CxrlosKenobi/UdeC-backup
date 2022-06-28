// Solución única
#include <stdio.h>

int main() {
  int n;
  printf("> ");
  scanf("%d", &n);

  while (n < 0 || n > 255) {
    printf("> ");
    scanf("%d", &n);
  }

  // n as a character
  char c = n + '0';
  printf("%c\n", c);
  
  // n as an unsigned int.
  unsigned int u = n;
  printf("%u\n", u);

  // n as an octal number.
  printf("%o\n", n);

  // n as a hexadecimal number.
  printf("%x\n", n);

  return 0;
}
