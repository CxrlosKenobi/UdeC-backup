// Solución propia
// Timus username: CxrlosKenobi
// Timus ID: 9833674
#include <stdio.h>

int main() {
  int harry, larry;
  scanf("%d %d", &harry, &larry);

  int n = harry + larry - 1;
  printf("%d %d", n - harry, n - larry);

  return 0;
}
