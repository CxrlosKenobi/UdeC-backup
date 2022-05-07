// Solución propia
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n <= 0) return 1;

  int data[n];
  while (n--) {
    int i;
    scanf("%d", &i);
    data[n] = i;
  }

  // Get the size of the array data
  int size = sizeof(data) / sizeof(data[0]);

  // Get the mean of the passed data
  int mean = 0;
  for (int i = 0; i < size; i++) {
    mean += data[i];
  }
  mean /= size;

  // Get the median of the passed data
  int median;
  if (size % 2 == 0)
    median = data[(size / 2) - 1];
  else
    median = data[size / 2];

  // Find the minimum of the passed data
  int min = data[0];
  for (int i = 0; i < size; i++) {
    if (data[i] < min)
      min = data[i];
  }

  // Find the maximum of the passed data
  int max = 0;
  for (int i = 0; i < size; i++) {
    if (data[i] > max)
      max = data[i];
  }

  printf("\nMin: %d\nMax: %d", min, max);
  printf("\nMean: %d\nMedian: %d\n", mean, median);

  return 0;
}
