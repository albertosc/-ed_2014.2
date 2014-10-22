#include <stdio.h>

void troca(float *a, float *b);


void troca(float *a, float *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	float x = 0, y = 1;
	
	troca(&x, &y);
	
	printf("Valor de x: %.2f\n", x);
	printf("Valor de y: %.2f\n", y);
}