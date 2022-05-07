// Solución propia
#include <stdio.h>

int main() {
  int i, j, k, l;
  printf("num1> ");
  scanf("%d", &i);
  printf("num2> ");
  scanf("%d", &j);
  printf("num3> ");
  scanf("%d", &k);
  printf("num4> ");
  scanf("%d", &l);

  // Create a vector of ints without values
  int v[4] = { i, j, k, l };

  // Order i, j, k, l from min to max and store in v without using loops.
  if (i > j) {
    v[0] = j;
    v[1] = i;
  } else {
    v[0] = i;
    v[1] = j;
  }

  if (k > l) {
    v[2] = l;
    v[3] = k;
  } else {
    v[2] = k;
    v[3] = l;
  }


  if (j > k) {
    v[]
  }  

  return 0;
}