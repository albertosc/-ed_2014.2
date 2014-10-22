#include <stdio.h>
#include <stdlib.h>
int main(void){
    float **p, *q;
    int i, j, aux;
    float c = 0;


      p = (float**)calloc(6,sizeof(float));
      for(i=0;i<2;i++){
            p[i]=(float*)calloc(6,sizeof(float));

      }
      q = (float*)calloc(36,sizeof(float));
      printf("Preencha o vetor:\n");

      for(i = 0 ; i < 36 ; i++){
          scanf("%f",&q[i]);
      }



      aux=0;
      for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                    p[i][j] = q[aux];
                    aux = aux + 1;

            }
      }
      for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                   c = c + p[i][j];
            }
            printf("Somatorio da linha %d: %.2f\n",i+1, c);
            c = 0;
      }
      free(p);
      free(q);
}



