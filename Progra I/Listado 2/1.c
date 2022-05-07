#include <stdio.h>

int main () {
  int n;
  printf("> ");
  scanf("%d", &n);
  while (n < 0) scanf("%d", &n);


  return 0;
}
