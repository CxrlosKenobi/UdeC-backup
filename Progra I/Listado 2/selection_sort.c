#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int n, lim_inf, lim_sup;
  printf("Ingrese el numero de elementos, el limite inferior y el limite superior: ");
  scanf("%d %d %d", &n, &lim_inf, &lim_sup);
  ++lim_sup;

  int v[n];
  srand(time(NULL));
  for(int i = 0; i < n; ++i)
    v[i] = lim_inf + rand() % (lim_sup-lim_inf);

  printf("Arreglo original:");
  for(int i = 0; i < n; ++i)
    printf(" %d", v[i]);
  
  printf("\n");

  //Selection Sort
  for (int i = 0 ; i < n-1; ++i) {// para cada posicion i del arreglo
    int min = v[i];
    int posmin = i;
    
    // Buscar el menor de la parte desordenada
    for (int j = i+1; j < n; ++j) {//para cada j mayor que i
      if (v[j] < min) {
        min = v[j];
        posmin = j;
      }
    }
    
    //Swap
    v[posmin] = v[i];
    v[i] = min; //colocar el minimo en su posicion
  }

  printf("Arreglo ordenado:");
  for (int i = 0; i < n; ++i)
    printf(" %d",v[i]);
  
  printf("\n");
  
  return 0;
}
