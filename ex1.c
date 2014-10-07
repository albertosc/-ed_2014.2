#include <stdio.h>

void trocarValores(int *a, int *b) {
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

int main(int argc, char** argv) {
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	trocarValores(&a, &b);
	printf("Valor de A: %i\n", a);
	printf("Valor de B: %i\n", b);
}