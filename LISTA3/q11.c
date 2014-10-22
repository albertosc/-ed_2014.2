#include <stdio.h>
#include <stdlib.h>















int main(void){
   int **p;
   int m,n,i,j, a=0,b=0 ,c=0,aux=0,aux2;


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

       for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(p[i][j] >= a){
                        aux=a;
                        a=p[i][j];
                        aux2=b;
                        b=aux;
                        c=aux2;
                }else{
                    if(p[i][j] > b){
                            aux = b;
                            b = p[i][j];
                            c = aux;
                    }else{
                        if(p[i][j]>=c){
                                c = p[i][j];
                        }
                    }
                }









                }
            }


       printf("Maiores valores: %d  %d  %d",a,b,c);
       free(p);
}


