// Solución propia
#include <stdio.h>

int pascal_eq (int n, int k); // Pascal's triangle entrys equation (n, k)

int main () {
  int _n, k;
  printf("Introduzca el número de filas: ");
  scanf("%d",&_n);
  while (_n <= 0) scanf("%d",&_n);
  printf("\n");

  if (_n == 1) {
    printf("\n1\n"); 
    return 0;
  }

  printf("1\n");
  for (int n = 1; n < _n; n++) {
    for (int k = 0; k <= n; k++)
      printf("%d ", pascal_eq(n, k));
    printf("\n");
  }

  return 0;
}

int pascal_eq (int n, int k) {
  int fact_nk = 1;
  int fact_n = 1;
  int fact_k = 1;

  if ((k == 0) || (n == k)) return 1;

  for (int i = 1; i <= n; ++i)
    fact_n *= i;

  for (int j = 1; j <= k; ++j)
    fact_k *= j;

  for (int l = 1; l <= (n - k); ++l)
    fact_nk *= l;

  return (fact_n / (fact_k * fact_nk));
}
