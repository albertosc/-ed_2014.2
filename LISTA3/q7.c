#include <stdio.h>
#include <stdlib.h>
int main(void){
    int **p;

    int x,i,j;

    i=0;





    printf("Digite o numero de distancias:\n");
    scanf("%d",&x);

    p = (int**)calloc(x, sizeof(int*));

    for(i=0;i<x;i++){
            p[i]= (int*)calloc(x,sizeof(int));
    }





          for(i=0;i<x;i++){
                printf("\n");


            for(j=0; j < x ;j++){
                    scanf("%d",&p[i][j]);


            }
          }

          for(i=0;i<x;i++){
                printf("\n");


            for(j=0; j < x ;j++){
                    printf(" %d ",p[i][j]);


            }
          }

          printf("\nDigite um endereco:\n");
          scanf("%d %d",&i, &j);
          printf("Valor: %d",p[i-1][j-1]);

    free(p);

}
