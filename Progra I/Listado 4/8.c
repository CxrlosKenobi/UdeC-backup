// Solución única
#include <stdio.h>
#include <string.h>

char palindromo(char* cadena1);

int main() {
  char* s1 = "Sopapos";

  printf("%d\n", palindromo(s1));

  return 0;
}

char palindromo(char* cadena1) {
  float largo = strlen(cadena1);
  float div = largo / 2;

  int counter = 0;
  for (int i = 0; i < largo; i++) {
    int opposite = largo - (i + 1);
    char leftside, rightside;
 
    // Case to lower case if necessary
    if (cadena1[i] >= 'A' && cadena1[i] <= 'Z')
      leftside = cadena1[i] + 32;
    else
      leftside = cadena1[i];

    // Case to lower case if necessary
    if (cadena1[opposite] >= 'A' && cadena1[opposite] <= 'Z')
      rightside = cadena1[opposite] + 32;
    else
      rightside = cadena1[opposite];


    if (leftside == rightside)
      counter++;
  }

  if (counter == largo)
    return 1;
  else
    return 0;
}
