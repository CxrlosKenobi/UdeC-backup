#include <stdio.h>

int main() {
  int i, j;
  printf("> ");
  scanf("%d", &i);
  printf("> ");
  scanf("%d", &j);

  printf("\n");
  if (i < j) {
    printf("%d\n", i * 2);
  } else {
    printf("%d\n", j * 2);
  }

  return 0;
}
