#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char filial[3];
    int qtdefunc;
    float faturtot;
}st;
int main(void){
    st *p;
        int v2[3]={1,2,3},i,x;

    float v[3]={0,0,0}, aux;
    printf("Alocando memoria inicial\n");
    
    p=(st*)calloc(3,sizeof(st));
    for(i = 0 ; i < 3 ; i++){
            printf("Filial  (1=SP / 2=RJ /3=BH):\n",i+1);
            scanf("%d",&x);
            switch(x){
                case 1:{
                        p->filial=="SP1";
                        break;
                        }
                case 2:{
                        p->filial=="RJ1";
                        break;
                       }
                case 3:{
                        p->filial=="BH1";
                        break;
                }
                default:{
                          printf("Opcao invalida.Digite 1 ou 2 ou 3:\n");
                          while((x!=1)&&(x!=2)&&(x!=3)){
                                scanf("%d",&x);
                          }
                        }
            }

            printf("Quantidade de funcionarios:\n"); // imprime a quantidade de func
            scanf("%d",&p->qtdefunc); // lê a função qtadde func
            printf("Faturamento da filial:\n"); //printa o faturamento da familia filial
            scanf("%f",&p->faturtot); // lê o faturamento total
            v[i]=(p->faturtot)/(p->qtdefunc);
            p = p + 1;
    }
    p = p - 3;


    for(i=0;i<2;i++){
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                x = v2[i];
                v2[i]=v2[i+1];
                v2[i+1] = x;
            }

    }
    for(i=0;i<2;i++){
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                x=v2[i];
                v2[i]=v2[i+1];
                v2[i+1]=x;
            }

    }


    printf("Faturamentos per capita em ordem crescente:\n");
    for(i=0;i<3;i++){
        printf("\nFilial %d: %.2f        %d",i+1,v[i],v2[i]);
    }


    free(p);
}





