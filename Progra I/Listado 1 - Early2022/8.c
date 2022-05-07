// Solución propia
#include <stdio.h>

void pseudoloop(char* word, int limit, int count);

int main() {
	int n;
	char* wtf = "paranguacutilimicuaro";

	printf("Ingrese un número del  1 al 10: ");
	scanf("%d", &n);

	if (n <= 0 || n >= 11) {
		return 1;
	}

	pseudoloop(wtf, n, 0);

	return 0;
}

// Using recursion in place of a loop
void pseudoloop(char* word, int limit, int count) {
	printf("(%d) %s\n", count+1, word);
	count += 1;
	if (count < limit) {
		pseudoloop(word, limit, count);
	}
}
