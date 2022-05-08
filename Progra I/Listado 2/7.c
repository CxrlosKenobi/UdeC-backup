// Solución propia
#include <stdio.h>

int main () {
  int n;
  printf("> ");
  scanf("%d", &n);

  int ar[n];
  for (int i = 0; i < n; i++) {
    int tmp;
    scanf("%d", &tmp);
    ar[i] = tmp;
  }

  // Print all the possible combinations with 3 elements from the array
  // Only with elements ordered from the smallest to the largest, and without repetitions
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      for (int k = j+1; k < n; k++) {
        printf("%d %d %d\n", ar[i], ar[j], ar[k]);
      }
    }
  }

  return 0;
}
