#include <stdio.h>
#define V_SIZE 10



void maximoMinimo(int * v, int * minimo, int * maximo) {
	int i;
	*minimo = *maximo = 0;
	for(i=0;i<V_SIZE;i++) {
		if(v[i] < *minimo) *minimo = v[i];
		if(v[i] > *maximo) *maximo = v[i];
	}
}


int main() {

	int v[] = {1, 2, -35, 3, 54, 4, 5, -90, 23, 0};

	int minimo;
	int maximo;

	maximoMinimo(&v, &minimo, &maximo);

	printf("(%d, %d)", minimo, maximo);

}