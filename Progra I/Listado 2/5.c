// Solución propia
#include <stdio.h>

int main () {
  int n, it = 0; // It for iterate a process nth times
  printf("n: ");
  scanf("%d", &n);

  int data[n];
  do { // Getting input
    int i;
    scanf("%d", &i);
    data[it] = i;
    it++;
  } while (it != n);

  // Getting the count of even & odds in the passed data
  int even_c, odd_c;
  for (int i = 0; i < it; i++) {
    if (data[i] % 2 == 0)
      even_c++;
    else
      odd_c++;
  }

  // Creating an array and sending numbers to its respective classification
  int even[even_c], odd[odd_c];
  int even_it = 0, odd_it = 0;
  for (int j = 0; j < it; j++) {
    if (data[j] % 2 == 0) {
      even[even_it] = data[j];
      even_it++;
    } else {
      odd[odd_it] = data[j];
      odd_it++;
    }
  }
  
  // Using selection sort structure to order the even array
  // From min to max
  int min;
  for (int k = 0; k < even_c; k++) {
    for (int l = k+1; l < even_c; l++) {
      if (even[k] > even[l]) {
        min = even[k];
        even[k] = even[l];
        even[l] = min;
      }
    }
  }

  // Using selection sort structure to order the odd array
  // From max to min
  int max;
  for (int k = 0; k < odd_c; k++) {
    for (int l = k+1; l < odd_c; l++) {
      if (odd[k] < odd[l]) {
        max = odd[k];
        odd[k] = odd[l];
        odd[l] = max;
      }
    }
  }
  
  printf("\nArray: ");
  for (int x = 0; x < it; x++)
    printf("%d ", data[x]);
  
  printf("\nEven: ");
  for (int y = 0; y < even_c; y++)
    printf("%d ", even[y]);

  printf("\nOdd: ");
  for (int z = 0; z < odd_c; z++)
    printf("%d ", odd[z]);

  printf("\n");
  return 0;
}
