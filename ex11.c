#include <stdio.h>

void maiorDoVetor(int vetor[], int n, int *maior) {
	int x;
	if(n > 0) {
		*maior = vetor[0];	
		for(x=1; x< n; x++) {
			if(vetor[x] > *maior) {
				*maior = vetor[x];
			}
		}
	}
}

int main(int argc, char** argv) {
	int n;
	printf("Digite o tamanho da array: ");
	scanf("%i", &n);
	int vetor[n];
	int x;
	for(x=0; x< n; x++) {
		scanf("%i", &vetor[x]);
	}
	int maior;
	maiorDoVetor(vetor, n, &maior);
	printf("Maior: %i\n", maior);
}