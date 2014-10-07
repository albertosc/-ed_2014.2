#include <stdio.h>

int main(int argc, char** argv) {
	int a,b;
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	int maiorEndereco;
	if(&a > &b) {
		maiorEndereco = &a;
	}
	else {
		maiorEndereco = &b;
	}
	printf("Maior Endereço: %i\n", maiorEndereco);
}