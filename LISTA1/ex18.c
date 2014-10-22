#include <stdio.h>

int main(int argc, char** argv) {
	float vetor[3][3] = {{0.1, 0.2, 0.3}, {0.4, 0.5, 0.6}, {0.7, 0.8, 0.9}};
	int x, y;
	for(x=0; x< 3; x++) {
		for(y=0; y<3; y++) {
			printf("Endereço array[%i][%i]: %i\n", x, y, &vetor[x][y]);
		}
	}
}