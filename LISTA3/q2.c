#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *p,i=0,j;



              p = (int*)calloc(1,sizeof(int));

              printf("Digite um valor inteiro.Caso queira parar, basta digitar valores menores que 0:\n");

              scanf("%d",&p[i]);



              if(p[i] >= 0){
                  i=1;

                do{
                        printf("\n");
                        p = (int*)realloc(p,(i+1)*sizeof(int));

                         scanf("%d",&p[i]);

                          i=i+1;

                }while((p[i-1]) >= 0);


                printf("\nValores digitados: \n");
                for(j=0;j<i-1;j++){

                        printf (" %d ",p[j]);
                }


                free(p);

              }else{
                  printf("Valor digitado foi negativo: %d\n",p[i]);

                  free(p);
              }

             }



















