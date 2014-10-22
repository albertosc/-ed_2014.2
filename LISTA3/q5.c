#include <stdio.h>
#include <stdlib.h>
int main(void){
typedef struct{
    int matricula;
    char sb[100];
    int d, m, a;
}st;



st *p;
int x,i;




  printf("Quantidade de alunos:\n");
  scanf("%d",&x);
  p =(st*)calloc(x,sizeof(st));



  printf("Cadastro dos alunos:\n\n");
  for(i=1;i<=x;i++){
      printf("Cadastro do aluno %d:\n",i);
      printf("Matricula: ");
      scanf("%d", &p->matricula);
      printf("\nSobrenome: ");
      scanf("%s",&p->sb);
      puts(p->sb);
      printf("\nData de nascimento: ");
      scanf("%d %d %d",&p->d, &p->m, &p->a);
      p=p+1;
  }
  p = p-x;
  for(i=1;i<=x;i++){
        printf("\n\n Dados do aluno %d:\n",i);
        printf("Numero de matricula: %d\n",p->matricula);
        printf("\nSobrenome do marginal: ");
        puts(p->sb);
        printf("\n\nData de nascimento:\n");
        printf("\n%d/%d/%d\n",p->d, p->m, p->a);
        p=p+1;
  }
free (p);
}



