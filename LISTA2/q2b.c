#include <stdio.h>

/*

a) O programa está errado, pois essa função troca não tem utilidade alguma se não mudarmos o valor
dos endereços, e não das variáveis locais, que só fazem sentido dentro do escopo (função troca)

Correção:
*/

void troca(int *i, int *j) { 
	int *temp; 
	temp = *i;
	*i = *j;  
	*j = temp;
}