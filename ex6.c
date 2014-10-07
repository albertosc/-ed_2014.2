#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2) {
  float delta=b*b-4*a*c;
  if (delta>0)
  {
      *x1= (-b+sqrt(delta))/(2*a);
      *x2= (-b-sqrt(delta))/(2*a);
      return 0;
  }
  else if (delta==0)
  {
    *x1 = *x2 = -b/(2*a);
    return 0;
  }
  else {
  	return -1;
  }
}

int main(int argc, char** argv) {
	float a, b, c;
	float x1, x2;
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	if(raizes(a, b, c, &x1, &x2) == 0) {
		printf("Valor de x1: %f\n", x1);
		printf("Valor de x2: %f\n", x2);
	}
	else {
		printf("Não existe raizes reais\n");
	}
}