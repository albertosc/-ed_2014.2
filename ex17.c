#include <stdio.h>

int main(int argc, char** argv) {
	float vetor[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
	int x;
	for(x=0; x< 10; x++) {
		printf("Endereço array[%i]: %i\n", x, &vetor[x]);
	}
}