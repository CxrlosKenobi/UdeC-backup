// Solución propia
// Timus username: CxrlosKenobi
// Timus ID: 9833674
#include <stdio.h>

int main() {
  int f;
  scanf("%d", &f);

  /* How many chunks of 45 mins fit in 4 hours? */
  int left_time = 4 * 60;
  int chunks = 12 - f;
  int equation = (chunks * 45);

  if (equation <= left_time)
    printf("YES");
  else
    printf("NO");

  return 0;
}
