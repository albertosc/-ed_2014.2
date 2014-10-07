#include <stdio.h>

int main(int argc, char** argv) {
	int var1 = 25;
	float var2 = 0.25;
	char var3[50] = "Hello World";
	printf("\nValores Antes:\nint: %i\nfloat:%f\nchar:%s\n", var1, var2, var3);

	int * ptr1 = &var1;
	float * ptr2 = &var2;
	char *  ptr3 = &var3;

	*ptr1 = 50;
	*ptr2 = 0.5;
	strcpy( ptr3 , "Char Modificado!" );

	printf("\nValores Depois:\nint: %i\nfloat:%f\nchar:%s\n", var1, var2, var3);
}