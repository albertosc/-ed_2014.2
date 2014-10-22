#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *p, x,i;



    printf("Digite quantos numeros:\n");
    scanf("%d",&x);
    p=calloc(x,sizeof(int));

    i=0;
    do{
        printf("Digite um inteiro:\n");
        scanf("%d",&p[i]);
        i=i+1;


    }while(i<x);




    for(i=0;i<x;i++){
            printf("%d\n",p[i]);
    }
    free(p);


}

