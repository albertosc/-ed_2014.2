#include <stdio.h>

void ordenarValores(int *a, int *b) {
	int aux;
	aux=*a;
	if(*a < *b) {
		*a = *b;
		*b = aux;
	}
}

int main(int argc, char** argv) {
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	ordenarValores(&a, &b);
	printf("Valor de A: %i\n", a);
	printf("Valor de B: %i\n", b);
}