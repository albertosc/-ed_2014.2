#include <stdio.h>
#include <stdlib.h>

int func(int *p, int m, int *n){
    int a,b;
    *n=0;

    for(a = 0;a < m ; a++){
              printf("Numero %d: \n",a+1);
              scanf("%d",&p[a]);
                    }

                    printf("Digite o numero a ser procurado os multiplos: \n");
                    scanf("%d",&b);

        for(a = 0; a < m ; a++){

                    if((p[a]% b)==0){
                            *n=*n+1;




                    }
            }



return 1;



}

int main(void){

    int *p;
   int m,n;


   printf("Digite a dimensao do vetor:\n");
       scanf("%d",&m);
       p=(int*)calloc(m,sizeof(int));

       func(p,m,&n);




       printf("Numero de multiplos: %d",n);
}






