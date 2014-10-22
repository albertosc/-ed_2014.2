/*
	1) Suponha que v é um vetor. Descreva a diferença conceitual entre as expressões v[3] e v + 3.
*/

int main() {
	int v[] = {1, 2, 3, 4};

	printf("v[3]: %i\nv+3: %i\n", v[3], v+3);
}


/*

A diferença de v[3] e v+3 é que v[3] representa o valor da quarta posição do array, 
já v+3 representa o endereço da quarta posição do array;

*/