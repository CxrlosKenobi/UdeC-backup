// Solución propia
// Timus username: CxrlosKenobi
// Timus ID: 9833674
#include <stdio.h>

int main() {
  int monsters = 0;
  char* translation = "";

  scanf("%d", &monsters);

  if (monsters >= 1 && monsters <= 4)
    translation = "few";
  else if (monsters >= 5 && monsters <= 9)
    translation = "several";
  else if (monsters >= 10 && monsters <= 19)
    translation = "pack";
  else if (monsters >= 20 && monsters <= 49)
    translation = "lots";
  else if (monsters >= 50 && monsters <= 99)
    translation = "horde";
  else if (monsters >= 100 && monsters <= 249)
    translation = "throng";
  else if (monsters >= 250 && monsters <= 499)
    translation = "swarm";
  else if (monsters >= 500 && monsters <= 999)
    translation = "zounds";
  else if (monsters >= 1000)
    translation = "legion";
  
  printf(translation);
  
  return 0;
}
