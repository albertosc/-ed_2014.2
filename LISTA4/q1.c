#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nome[40];
    char depto[3];
    int matric;
    float qthoras,salh,saltotal;
}st;
int main(void){
    st *p;
    int i,c=0,aux2=0;
    float aux=0;
    printf("Alocando registros...\n");
    p=(st*)calloc(50,sizeof(st));
    for(i=0;i<50;i++){
            printf("Dados do funcionario:\n");
            printf("Matricula do funcionario %d:\n", i+1);
            scanf("%d",&p->matric);
            if(p->matric==0){
                    printf("Funcionario inexistente!");
                    p->depto==NULL;
                    p->nome==NULL;
                    p->qthoras=0;
                    p->salh=0;
            }else{
                printf("Nome do funcionario %d:\n",i+1);
                scanf("%s",&p->nome);
                printf("Departamento %d:\n",i+1);
                scanf("%s",&p->depto);
                printf("Quantidade  de horas %d:\n",i+1);
                scanf("%f",&p->qthoras);
                printf("Salario do funcionario %d:\n",i+1);
                scanf("%f",&p->salh);
                fflush(stdin);
                c=c+p->salh;
                p=p+1;
            }
    }
    p=p-50;
    for(i=0;i<50;i++){
            p->saltotal=c;
            p=p+1;
            }
        p=p-50;
            system("cls");
            for(i=0;i<50;i++){
                printf("Matricula do funcionario %d: %d",i+1, p->matric);
                printf("Nome do funcionario: %s\n",p->nome);
                printf("Departamento %d: %s\n",i+1, p->depto);
                printf("Quantidade  de horas %d: %.2f\n",i+1, p->qthoras);
                printf("Salario do funcionario %d: %.2f\n\n\n",i+1,p->salh);
                if(p->salh>=aux){
                        aux = p->salh;
                        aux2=i;
                }
                p=p+1;
            }
            p=p-50+aux2;
            printf("Maior salario: %.2f  do funcionario: %s\n",p->salh,p->nome);
            printf("Matricula: %d\n",p->matric);
            printf("Departamento: %s\n",p->depto);
            free(p);
    }
