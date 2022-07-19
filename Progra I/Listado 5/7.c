// Solucion propia
#include <stdio.h>
#include <stdlib.h>

int esPalindromo(char *palabra, int tam);

int main() {
  char *palabra = "ANA";
  int tam = 3;

  if (esPalindromo(palabra, tam)) {
    printf("%s es palindromo\n", palabra);
  } else {
    printf("%s no es palindromo\n", palabra);
  }


  return 0;
};


int esPalindromo(char *palabra, int tam) {
  if (tam == 1) {
    return 1;

  } else if (tam == 2) {
    return palabra[0] == palabra[1];

  } else {
    return palabra[0] == palabra[tam - 1] && esPalindromo(palabra + 1, tam - 2);
  }
};
