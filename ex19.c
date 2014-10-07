#include <stdio.h>

int main(int argc, char** argv) {
	int vetor[] = {1, 2, 3, 4, 5};
	int * ptr = vetor;
	int x;
	for(x=0; x<5; x++) {
		int n = *ptr++;
		n = n *2;
		printf("%i\n", n);
	}
}