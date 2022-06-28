// Solucion única
#include <stdio.h>
#include <string.h>

int caracteresComunes(char* cadena1, char* cadena2);

int main() {
  char* s1 = "Hola";
  char* s2 = "Holo";

  printf("%d\n", caracteresComunes(s1, s2));

  return 0;
}

int caracteresComunes(char* cadena1, char* cadena2) {
  int i, j, comunes = 0;
  for (i = 0; i < strlen(cadena1); i++) {
    for (j = 0; j < strlen(cadena2); j++) {
      if (cadena1[i] == cadena2[j]) {
        comunes++;
      }
    }
  }

  return comunes;
}
