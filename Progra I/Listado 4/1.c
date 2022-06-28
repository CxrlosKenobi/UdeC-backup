// Solución única
#include <stdio.h>
int main() {
  char op;
  double v1, v2;

  printf("Ingrese parámetro v1: ");
  scanf("%lf", &v1);

  printf("Ingrese una opcion (+, -, *, /): ");
  scanf(" %c", &op);
  while (op != '+' && op != '-' && op != '*' && op != '/') {
    printf("Ingrese una opcion (+, -, *, /): ");
    scanf(" %c", &op);
  }; 

  printf("Ingrese parámetro v2: ");
  scanf("%lf", &v2);

  switch (op) {
    case '+':
      printf("%lf + %lf = %lf\n", v1, v2, (v1 + v2));
      break;

    case '-':
      printf("%lf - %lf = %lf\n", v1, v2, (v1 - v2));
      break;
    
    case '*':
      printf("%lf * %lf = %lf\n", v1, v2, (v1 * v2));
      break;
    
    case '/':
      printf("%lf / %lf = %lf\n", v1, v2, (v1 / v2));
      break;
      
    default:
      printf("Catch me if you can\n");
  };

  return 0;
};
