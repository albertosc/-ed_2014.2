#include <stdio.h>

void lerNotas(float *a, float *b) {
	scanf("%f", a);
	scanf("%f", b);
}

void calcMedia(float *a, float *b, float *simples, float *ponderada) {
	*simples = (*a + *b)/2;
	*ponderada = (*a + *b*2)/3;
}

void exibeDados(float *a, float *b, float *simples, float *ponderada) {
	printf("Nota 1: %f\nNota 2: %f\nMedia Simples: %f\nMedia Ponderada: %f\n", *a, *b, *simples, *ponderada);
}


int main(int argc, char** argv) {
	float a, b;
	float simples, ponderada;
	lerNotas(&a, &b);
	calcMedia(&a, &b, &simples, &ponderada);
	exibeDados(&a, &b, &simples, &ponderada);
}