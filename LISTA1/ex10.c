#include <stdio.h>

int somaDoDobro(int *a, int *b) {
	*a=2*(*a);
	*b=2*(*b);
	return *a + *b;
}

int main(int argc, char** argv) {
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	int resultado = somaDoDobro(&a, &b);
	printf("Resultado: %i\n", resultado);
}