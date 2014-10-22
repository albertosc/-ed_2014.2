#include <stdio.h>

/*
	a) O programa está correto, apenas faltando a função main()
*/


int main() {
	char *a, *b;

	a = "abacate";

	b = "uva";

	if (a < b) {
		printf ("%s vem antes de %s no dicionário", a, b);
	}
	else {
		printf ("%s vem depois de %s no dicionário", a, b);
	}
}
