#include <stdio.h>


int main() {
  int n = 6;
  int arr[6] = {4, 5, 2, 6, 1, 9};
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        int aux = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = aux;
      }
    }
  }

  for (int i = 0; i < len; i++)
    printf("%d ", arr[i]);

  return 0;
}
