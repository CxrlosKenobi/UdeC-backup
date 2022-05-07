// Śolución propia
#include <stdio.h>

int main(){
	int x1, x2, x3;
	int y1, y2, y3;
	int xMin, yMin, xMax, yMax;

	printf("\tIngrese la coordenada (x, y):\n");
	printf("x: "); // Pidiendo coordenada X
	scanf("%d", &x1);
	printf("y: "); // Pidiendo coordenada Y
	scanf("%d", &y1);

	printf("\tIngrese la coordenada (x, y):\n");
	printf("x: "); 
	scanf("%d", &x2);
	printf("y: "); 
	scanf("%d", &y2);

	printf("\tIngrese la tercera coordenada (x, y):\n");
	printf("x: "); 
	scanf("%d", &x3);
	printf("y: "); 
	scanf("%d", &y3);

	// Definiendo máximos y minimos del eje X
	if (x1 >= x2){
		xMax = x1;
		xMin = x2;
	}
	else {
		xMax = x2;
		xMin = x1;
	}

	// Definiendo máximos y minimos del eje Y
	if (y1 >= y2){
		yMax = y1;
		yMin = y2;
	}
	else {
		yMax = y2;
		yMin = y1;
	}

	// Si la tercera coordenada está dentro de las otras coordenadas ...
	while (xMin <= x3 <= xMax && yMin <= y3 <= yMax){ 
		printf("\ncontenido\n");
		return 1;
	}

	// Y si no lo está...
	printf("\nno contenido\n");

  return 0;
}
