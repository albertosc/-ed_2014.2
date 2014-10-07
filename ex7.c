#include <stdio.h>

void separar(float num, int *inteiro, float *frac) {
	*inteiro = (int)num;
	*frac = num-*inteiro;
}

int main(int argc, char** argv) {
	float num;
	int inteiro;
	float frac;
	printf("Digite um valor real: ");
	scanf("%f", &num);
	separar(num, &inteiro, &frac);
	printf("Valor Inteiro: %i\n", inteiro);
	printf("Valor de Fracionário: %f\n", frac);
}