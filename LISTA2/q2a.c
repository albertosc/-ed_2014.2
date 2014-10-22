#include <stdio.h>

/*

a) O programa está errado, pois não é possível, na linguagem C, atribuir um valor à um ponteiro.

	Deveria ser:
*/

	void main() {
		int x, *p;
		x = 100;
		*p = x;
		printf("Valor de p: %d.\n", *p);

	}