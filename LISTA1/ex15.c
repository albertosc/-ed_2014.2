#include <stdio.h>

int main(int argc, char** argv) {
	int a = 4;
	int b = 5;
	int maiorEndereco;
	if(&a > &b) {
		maiorEndereco = &a;
	}
	else {
		maiorEndereco = &b;
	}
	printf("Maior Endereço: %i\n", maiorEndereco);
}