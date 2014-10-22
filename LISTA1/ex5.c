#include <stdio.h>

void somar(int *a, int *b) {
	*a+=*b;
}

int main(int argc, char** argv) {
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	somar(&a, &b);
	printf("Valor de A: %i\n", a);
}