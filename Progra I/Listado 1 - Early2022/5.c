// Solución propia
//
#include <stdio.h>

#define false 0
#define true 1

int main() {
  int i, j, k;
  printf("num(1)> ");
  scanf("%d", &i);
  printf("num(2)> ");
  scanf("%d", &j);
  printf("num(3)> ");
  scanf("%d", &k);


  // Case 1:
  // When at least one of the num is < 0
  int case_one;
  if (i < 0 || j < 0 || k < 0) {
    case_one = true;
  } else {
    case_one = false;
  }

  // Case 2:
  // When at least two of them are < 0
  int case_two;
  if (i < 0 && j < 0) {
    case_two = true;
  } else if (i < 0 && k < 0) {
    case_two = true;
  } else if (j < 0 && k < 0) {
    case_two = true;
  } else {
    case_two = false;
  }

  // Case 3:
  // When al of them are < 0
  int case_three;
  if (i < 0 && j < 0 && k < 0) {
    case_three = true;
  } else {
    case_three = false;
  }

  // Default case
  // When all of them are positive
  int default_case;
  if (i >= 0 && j >= 0 && k >= 0) {
    default_case = true;
  } else {
    default_case = false;
  }


  if (case_three) {
    printf("%d %d %d \n", i, j, k);
  } else if (case_two) {
    printf("%d %d \n", j, k);
  } else if (case_one) {
    printf("%d \n", i);
  } else if (default_case) {
    return 0;
  }
  
  return 0;
}
