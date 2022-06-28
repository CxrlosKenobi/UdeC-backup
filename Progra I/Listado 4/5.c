// Solución única
#include <stdio.h>

void ordenParcial(int* v1, int n, int cant);

int main() {
  // Dummy data for testing
  int n = 6;
  int cant = 3;
  int v1[6] = {4, 1, 2, 6, 3, 8};

  printf("Original: ");
  for (int i = 0; i < n; i++) printf("%d ", v1[i]);

  ordenParcial(v1, n, cant);

  printf("\n"); return 0;
}

void ordenParcial(int* v1, int n, int cant) {
  int orderedV1[n];

  for (int i = 0; i < n; i++) // Copying v1 to orderedV1
    orderedV1[i] = v1[i];

  for (int i = 0; i < n; i++) { // Bubble sorting in descending order
    for (int j = 0; j < n - i - 1; j++) {
      if (orderedV1[j] < orderedV1[j+1]) {
        int aux = orderedV1[j];
        orderedV1[j] = orderedV1[j+1];
        orderedV1[j+1] = aux;
      }
    }
  }

  int outputV1[n];
  for (int i = 0; i < cant; i++) {
    // Setting outputV1 to the first cant-th elements of orderedV1 but in ascending order
    outputV1[i] = orderedV1[n-cant-i-1];
  }

  // Shifting the elements from v1 that are not in outputV1 to v1
  int aux = 0;
  for (int i = 0; i < n; i++) {
    int is_in = 0;
    for (int j = 0; j < n; j++) {
      if (v1[i] == outputV1[j]) {
        is_in = 1;
        break;
      }
    }
    if (is_in == 0) {
      outputV1[cant+aux] = v1[i];
      aux++;
    }
  }

  printf("\nOrdered : ");
  for (int i = 0; i < n; i++) printf("%d ", orderedV1[i]);

  printf("\n\nOutput  : ");
  for (int i = 0; i < n; i++) printf("%d ", outputV1[i]);
}
