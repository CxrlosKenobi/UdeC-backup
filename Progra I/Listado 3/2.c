// Solucion con ayuda de:
//https://www.programiz.com/c-programming/examples/binary-decimal-convert
#include <stdio.h>
#include <math.h>

int main () {
  long int nums[5] = {29, 131, 2048, 121817, 4000000001};

  for (int i = 0; i < 5; i++) {
    // Convert nums[i] to its binary representation
    unsigned long long int bin = 0;
    long int n = nums[i];
    unsigned long long int rem; // rem from remainder
    unsigned long long int j = 1; 

    while (n != 0) {
      rem = n % 2;
      n /= 2;
      bin += rem * j;
      j *= 10;
    }

    printf("%ld as a binary is %llu\n", nums[i], bin);

    long int octal = nums[i];
    printf("%ld as an octal is %lo\n", nums[i], octal); // %lo es para long int en octal

    printf("%ld as an hexadecimal is %lx\n", nums[i], nums[i]); // %lx es para long int en hexadecimal
    printf(" - - - - - - - - - - - - - - - - \n");
  }

  return 0;
}
