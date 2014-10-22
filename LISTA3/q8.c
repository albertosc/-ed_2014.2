#include <stdio.h>
#include <stdlib.h>

int func(int **p, int x, int m, int n){
    int a, b, c=0;
    for(a=0;a < m ;a++){
            for(b=0; b < n ;b++){
                    if( p[a][b]== x){
                            c=1;
                            printf("Valor encontrado na posicao %d %d.\n",a+1,b+1);

                    }
            }
   }



   if(c==1){
    return 1;
   }else{
    return 0;
   }
}



int main(void){
   int **p;
   int m,n,i,j;


   printf("Digite as dimensoes da matriz:\n");
       scanf("%d %d",&m, &n);
       p = (int**)calloc(m,sizeof(int));

       for(i=0;i<m;i++){
            p[i]=(int*)calloc(n,sizeof(int));
       }

       printf("\nPreencha a matriz:\n");
       for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&p[i][j]);
            }
       }
       printf("Digite o valor a ser procurado:\n");
       scanf("%d",&i);
       func(p,i,m,n);
       free(p);

   }





