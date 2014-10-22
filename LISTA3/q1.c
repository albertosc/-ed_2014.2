#include <stdio.h>
#include <stdlib.h>





int main(void){

    int *p, v,i;

    printf("Entre o tamanho a ser alocado:\n");
    scanf("%d",&v);
    p = malloc(v*sizeof(int));
    for (i=0;i < v;i++){

          printf("Digite o %do valor:\n",i+1);
          scanf("%d",&p[i]);
          }
          printf("\nResultado final:\n");
     for (i=0;i<v;i++){
          printf(" %d ",p[i]);
          }
free(p);





    }
