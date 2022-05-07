// Solución propia
#include <stdio.h>

#define false 0
#define true 1 

int doblepar(int i, int j);
int par(int n);

int main() {
  int i, j, k;
  printf("num1> ");
  scanf("%d", &i);
  printf("num2> ");
  scanf("%d", &j);
  printf("num3> ");
  scanf("%d", &k);

  if (
    (doblepar(i, j) && !par(k)) ||
    (doblepar(i, k) && !par(j)) ||
    (doblepar(j, k) && !par(i))
  ) {
    printf("variadito\n");

  } else if (
    (!doblepar(i, j) && par(k)) ||
    (!doblepar(i, k) && par(j)) ||
    (!doblepar(j, k) && par(i))
  ) {
    printf("variadito\n");

  } else {
    printf("uniforme\n");
  }

  return 0;
}

int doblepar(int i, int j) {
  if ((i % 2 == 0) && (j % 2 == 0)) {
    return true;
  } else {
    return false;
  }
}

int par(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}
