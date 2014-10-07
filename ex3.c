#include <stdio.h>

void trocarValores(int *a, int *b) {
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

int ordenarValores(int *a, int *b, int *c) {
	if(*a >= *b) {
		trocarValores(a, b);
	}
	if(*b >= *c) {;
		trocarValores(b, c);
	}
	if(*c >= *a && *a >= *b) {
		trocarValores(a, b);
	}

	return *a == *b && *b == *c;

}

int main(int argc, char** argv) {
	int a, b, c;
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	printf("Digite o valor de C: ");
	scanf("%i", &c);
	printf("Valor de A: %i\n", a);
	printf("Valor de B: %i\n", b);
	printf("Valor de C: %i\n", c);
}