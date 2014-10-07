#include <stdio.h>

int main(int argc, char** argv) {
	int vetor[] = {1, 2, 3};
	int * ptr = vetor;
	int x;
	for(x=0; x<3; x++) {
		printf("%i\n", *ptr++);
	}
}