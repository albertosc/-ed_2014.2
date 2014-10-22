#include <stdio.h>


int main() {
	int x = 100, *p, **pp;

	p = &x; // O ponteiro p, recebe o endereço de x, que por sua vez vale 100

	pp = &p; // O ponteiro que aponta para p, recebe o endereço de p, que aponta para x que vale 100

	printf("Valor de pp: %d\n", **pp); // Com um (1) *, recebemos o ponteiro p, com os egundo * recebemos x, que é 100
}