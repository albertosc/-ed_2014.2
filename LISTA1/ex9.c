#include <stdio.h>

int somarVetor(int vetor1[], int tamanhoVetor1, int vetor2[], int tamanhoVetor2, int *resultado) {
	int x;
	if(tamanhoVetor1 == tamanhoVetor2) {
		for(x=0; x< tamanhoVetor1; x++) {
			resultado[x] = vetor1[x] + vetor2[x];
		}
		return 0;
	}
	else {
		return -1;
	}
}

int main(int argc, char** argv) {
	int vetor1[] = {1, 2, 3};
	int vetor2[] = {5, 8, 1};
	int resultado[3];
	int tamanhoVetor1 = sizeof(vetor1) / sizeof(*vetor1);
	int tamanhoVetor2 = sizeof(vetor2) / sizeof(*vetor2);
	somarVetor(vetor1, tamanhoVetor1, vetor2, tamanhoVetor2, &resultado);
	int i;
	for(i=0; i<tamanhoVetor1; i++) {
		printf("%i ", resultado[i]);
	}
}