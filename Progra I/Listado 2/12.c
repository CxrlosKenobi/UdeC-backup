// 1787. Turn for MEGA
// Timus Online Judge
// Judge_ID: 336277ZR
// Solucion propia

#include <stdio.h>

int main () {
  int k, n;
  scanf("%d %d", &k, &n);

  int turns, sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &turns);

    if ((turns + sum) > k)
      sum = turns + sum - k;
    else
      sum = 0;
  }

  printf("%d\n", sum);

  return 0;
}
