#include <stdio.h>

void maiorMenorDoVetor(int vetor[], int tamanhoVetor,  int *maior, int *menor) {
	int x;
	if(tamanhoVetor > 0) {
		*maior = vetor[0];	
		*menor = vetor[0];	
		for(x=1; x< tamanhoVetor; x++) {
			if(vetor[x] > *maior) {
				*maior = vetor[x];
			}
			if(vetor[x] < *menor) {
				*menor = vetor[x];
			}
		}
	}
}

int main(int argc, char** argv) {
	int n;
	int vetor[] = {1, 2, 3, 4, 5};
	int tamanhoVetor = sizeof(vetor) / sizeof(*vetor);
	int maior, menor;
	maiorMenorDoVetor(vetor, tamanhoVetor, &maior, &menor);
	printf("Maior: %i\nMenor: %i\n", maior, menor);
}