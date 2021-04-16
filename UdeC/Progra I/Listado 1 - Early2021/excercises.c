#include <stdio.h>
#include <stdlib.h>


// ** Ejercicio 4 ** //
// Funcion swap que acompaña al ejercicio cuatro
void swap(int *xp, int *yp){
	int aux = *xp; // Variable auxiliar que apunta con un puntero a xp
	
	*xp = *yp; // Puntero a xp apunta puntero a yp
	*yp = aux; // Puntero a yp es igual ahora a nuestra varible auxiliar
}
void cuatro(){
	int x, y, z;

	printf("Ingrese un número x: ");
	scanf("%d", &x);

	printf("Ingrese otro número y: ");
	scanf("%d", &y);

	// Si es que a y b son negativos entonces ...
	if (x < 0 && y < 0){
		swap(&x, &y); // Llamamos nuestra funcion entregando las direcciones a hacer swap
	}

	printf("\tTus variables:\nx = %d\ny = %d\n\n", x, y);
}


// ** Ejercicio 6 ** //
void seis(){
	// Inicializamos las variables que usaremos
	int x, y, z;
	int par = 0;
	int impar = 0;

	printf("\nIngrese un número x: ");
	scanf("%d", &x);

	printf("Ingrese otro número y: ");
	scanf("%d", &y);	

	printf("Ingrese un número z: ");
	scanf("%d", &z);


	// Creamos un array o lista con nuestras variables para iterar en cada una y ahorrar codigo
	int digits[3] = {x, y, z};
	for (int i = 0; i < 3; i++)
	{
		if(digits[i] % 2 == 0){ // Si el modulo con 2 da cero, es par
			par += 1;
		}
		else { // De lo contrario es impar
			impar += 1;
		}
	}

	if (par == 2 || impar == 2){ // Esto se explica solo
		printf("\nvariadito\n");
	}
	else {
		printf("\nuniforme\n");
	}
}


// ** Ejercicio 7 ** //
void siete(){
	// Inicializamos las variables donde almacenaremos nuestros numeros
	float a, b, c, d;

	// Comenzamos sin ciclos a pedir numeros 
	printf("Ingrese un número: ");
	scanf("%f", &a);

	printf("Ingrese otro número: ");
	scanf("%f", &b);	

	printf("Ingrese otro número: ");
	scanf("%f", &c);

	printf("Ingrese un último número: ");
	scanf("%f", &d);
	printf("\n");

	// Imprimimos con \t para centrar texto y \n para nueva linea
	printf("\tTus numeros fueron:\n%f\n%f\n%f\n%f\n\n", a, b, c, d);

}


// ** Ejercicio 8 ** //
void loopie(char* word, int limit, int count){
	printf("(%d) %s\n", count+1, word);
	count += 1;
	if (count < limit){
		loopie(word, limit, count);
	}
}
void ocho(){
	int n;
	char* wtf = "paranguacutilimicuaro";

	printf("\nIngrese un número del  1 al 10: ");
	scanf("%d", &n);

	if (n <= 0 || n >= 11){
		exit(0);
	}

	loopie(wtf, n, 0);
}


// ** Ejercicio 9** //
void nueve(){
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
		exit(0);
	}

	// Y si no lo está...
	printf("\nno contenido\n");
}
int main(){
	int ans;
	printf("\nSelecciona el ejercicio que quieras ejecutar: (4, 6, 7, 8, 9)\n> ");
	scanf("%d", &ans);

	switch(ans){
		case 4:
			cuatro();
			break;
		case 6:
			seis();
			break;
		case 7:
			siete();
			break;
		case 8:
			ocho();
			break;
		case 9:
			nueve();
			break;
	}
	return 0;
}
