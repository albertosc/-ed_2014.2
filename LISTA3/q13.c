#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char n[30];
    int cod;
    float pr;
}st;

int main(void){

    int *p, **q, i, j;
    char **s;
    st *a;


    printf("Gerando memoria de 1024 bytes:\n");
    p = (int*)malloc(1024);
    printf("Tamanho alocado: %d\n",256*sizeof(p));




    printf("Gerando matriz 10x10:\n");
    q =(int**)calloc(3,sizeof(int));

    for(i=0;i<3;i++){
            q[i]=(int*)calloc(3,sizeof(int));
    }
    printf("Preencha a matriz:\n");
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                    scanf("%d",&q[i][j]);
            }




    }for(i=0;i<3;i++){
        printf("\n");
            for(j=0;j<3;j++){
                    printf(" %d ",q[i][j]);
            }
    }



    a = (st*)calloc(2,sizeof(st));

    printf("Preencha dados dos funcionarios:\n");

    for(i=0;i<2;i++){
            printf("Nome %d: ",i+1);
            scanf("%s",&a->n);
            printf("\nCodigo %d: ",i+1);
            scanf("%d",&a->cod);
            printf("\nPreco %d: ",i+1);
            scanf("%f",&a->pr);
            a=a+1;
    }
    a=a-2;
    printf("\nDados:\n");

    for(i=0;i<2;i++){
            printf("\nNome %d: ",i+1);
            puts(a->n);
            printf("\nCodigo %d: %d",i+1,a->cod);
            printf("\nPreco $d: %.2f",i+1,a->pr);
            a=a+1;
    }

    printf("\n\nTEXTO:\n");

    s=(char**)calloc(100,sizeof(char));
    for(i=0;i<100;i++){
                s[i]=(char*)calloc(80,sizeof(char));
    }
    printf("Digite:\n");

    for(i=0;i<100;i++){
            gets(s[i]);
    }

    printf("\n\nTexto finalizado.Resultado final:\n");
    for(i=0;i<100;i++){
        puts(s[i]);
    }



    free (p);
    free (q);
    free (a);
}




