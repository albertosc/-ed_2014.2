#include <stdio.h>
#include <stdlib.h>
int main(void){
int **p, **q, m, n, i,j;



    printf("Digite o tamanho da matriz inicial:\n");
    scanf("%d %d",&m, &n);


     p =(int**)calloc(m,sizeof(int));
     for(i=0;i < m;i++){




            p[i]=(int*)calloc(n,sizeof(int));
     }




     printf("Preencha a matriz:\n");
     for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                    scanf("%d",&p[i][j]);
            }
     }

     q = (int**)calloc(n,sizeof(int));
     for(i=0;i<n;i++){
            q[i]=(int*)calloc(m,sizeof(int));
     }
     for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                    q[j][i] = p[i][j];
            }
     }
      for(i=0;i<n;i++){
            printf("\n");
            for(j=0;j<m;j++){
                    printf(" %d ",q[i][j]);
            }
     }



     free(p);
     free(q);




     }
