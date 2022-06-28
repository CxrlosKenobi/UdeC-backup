// Solucion Unica
// Then print the
/* 
  - Minor number (in scientific notation)
  - Major number (with the sign and with at least 10 digits)
  - Mean of the array (with at least 10 digits and 2 decimals)
  - Median of the array (4 decimals)
  - Avg absolute deviation (2 decimals)
  - Standard deviation (shortest format, 3 decimals)
  - Variance (shortest format)
*/

#include <stdio.h>

int main () {
  int n;
  printf("n: ");
  scanf("%d", &n);

  double nums[n];
  for (int i = 0; i < n; i++) {
    scanf("%lf", &nums[i]);
  }

  for (int i = 0; i < n; i++)
    printf("%lf\n", nums[i]);
  
  return 0;
}
