#include <stdio.h>
#include <stdlib.h>



int main(void){
   float **p;
   int m,n,i,j;




   printf("Digite as dimensoes da matriz:\n");
       scanf("%d %d",&m, &n);
       p = (float**)calloc(m,sizeof(float));

       for(i=0;i<m;i++){
            p[i]=(float*)calloc(n,sizeof(float));
       }

       printf("\nPreencha a matriz:\n");
       for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%f",&p[i][j]);
            }
       }
       printf("\nMatriz resultado:\n");
       for(i=0;i<m;i++){
            printf("\n");
            for(j=0;j<n;j++){
                printf(" %.2f ",p[i][j]);
            }
       }

       free(p);

   }





