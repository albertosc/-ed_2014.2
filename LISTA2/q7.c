#include <stdio.h>
#include <stdlib.h>


int stringlen(char *s)
{
	char *p=s;
	while(*p!='\0')
		p++;
	return(p-s);
}

char *strcopy(char *str) {
	int len = stringlen(str);
	char *dst;
	dst = (char *) malloc(len);
	int i;
	for (i=0; (dst[i] = *str) != '\0'; ++str, ++i);
	return dst;
}

int main() {

	char * resultado;
	resultado = strcopy("TESTE");
	printf("%s", resultado);
}