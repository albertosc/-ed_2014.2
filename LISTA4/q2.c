#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char curso[30];
    int rgm,semestre,anoinicio;

}st;


int main(void){

    st *adm, *eng, *med;
    int i;



    printf("Alocando registros...\n");
    adm=(st*)calloc(1,sizeof(st));
    eng=(st*)calloc(1,sizeof(st));
    med=(st*)calloc(1,sizeof(st));

    for(i=0;i<1;i++){
            printf("Dados do aluno Administracao:\n");


                printf("Matricula do aluno %d:\n", i+1);
                scanf("%d",&adm->rgm);

                printf("Curso do aluno %d:\n",i+1);
                scanf("%s",&adm->curso);
                printf("Semestre %d:\n",i+1);
                scanf("%s",&adm->semestre);
                printf("Ano de inicio:\n",i+1);
                scanf("%d",&adm->anoinicio);

                fflush(stdin);

                adm = adm + 1;
            }
    adm = adm -1;
    for(i=0;i<1;i++){
            printf("Dados do aluno Engenharia:\n");


                printf("Matricula do aluno %d:\n", i+1);
                scanf("%d",&eng->rgm);

                printf("Curso do aluno %d:\n",i+1);
                scanf("%s",&eng->curso);
                printf("Semestre %d:\n",i+1);
                scanf("%s",&eng->semestre);
                printf("Ano de inicio:\n",i+1);
                scanf("%d",&eng->anoinicio);

                fflush(stdin);

                eng = eng + 1;
            }
    eng = eng - 1;
    for(i=0;i<1;i++){
            printf("Dados do aluno Medicina:\n");


                printf("Matricula do aluno %d:\n", i+1);
                scanf("%d",&med->rgm);

                printf("Curso do aluno %d:\n",i+1);
                scanf("%s",&med->curso);
                printf("Semestre %d:\n",i+1);
                scanf("%s",&med->semestre);
                printf("Ano de inicio:\n",i+1);
                scanf("%d",&med->anoinicio);

                fflush(stdin);

                med = med + 1;
            }
    med = med -1;
    free(adm);
    free(eng);
    free(med);
}
