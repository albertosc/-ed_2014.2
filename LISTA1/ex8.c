#include <stdio.h>

void maiorDoVetor(int vetor[], int tamanhoVetor, int *maior, int *ocorrencias) {
	int x;
	*ocorrencias = 0;
	if(tamanhoVetor > 0) {
		*maior = vetor[0];	
		for(x=1; x< tamanhoVetor; x++) {
			if(vetor[x] > *maior) {
				*maior = vetor[x];
				*ocorrencias = 1;
			}
			else if (vetor[x] == *maior) {
				*ocorrencias= *ocorrencias+1;
			}
		}
	}
}

int main(int argc, char** argv) {
	int vetor[] = {1,4, 4, 5, 3, 4};
	int tamanhoVetor = sizeof(vetor) / sizeof(*vetor);
	int maior, ocorrencias;
	maiorDoVetor(vetor, tamanhoVetor, &maior, &ocorrencias);
	printf("Maior: %i\nOcorrencias:%i\n", maior, ocorrencias);
}