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


  return 0;
}
