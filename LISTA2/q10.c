#include <stdio.h>
#include <stdlib.h>


int stringlen(char *s)
{

}

int * ocorrencias(char *str, char c, int * num) {
	int i;
	int qtd = 0;
	int * vetor_oc;
	vetor_oc = (int *) malloc(1 * sizeof(int));
	for (i=0; (*str) != '\0'; ++str, ++i) {
		if(*str == c) {
			vetor_oc[qtd] = i;
			qtd++;
			realloc(vetor_oc, qtd*sizeof(int));
		}
	}
	*num = qtd;
	return vetor_oc;
}

int main() {
	int qtd;
	int * o = ocorrencias("teste", 'e', &qtd);
	int i;
	printf("Ocorrencias: %d\nLocais de Ocorrencias:\n", qtd);
	for(i=0; i<qtd; ++i) {
		printf("[%i]", o[i]);
	}
	printf("\n");
}