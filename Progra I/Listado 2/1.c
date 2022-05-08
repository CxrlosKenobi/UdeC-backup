// Solución con ayuda del sitio:
// https://www.programiz.com/python-programming/examples/fibonacci-sequence
#include <stdio.h>

int main () {
  int n;
  printf("> ");
  scanf("%d", &n);
  while (n < 0) scanf("%d", &n);
  if (n == 1) printf("1\n");

  // Print until the nth number of the Fibonacci sequence
  int a = 1, b = 1; // This are the first two numbers of the sequence
  int i = 0; // Index of the sequence
  while (i < n) {
    printf("%d ", a);
    int c = a + b; // This is the next number of the sequence
    a = b; // Following the fibonacci sequence pattern
    b = c;
    i++; // Increment the index
  }

  printf("\n");
  return 0;
}
