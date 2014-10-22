#include <stdio.h>
#include <stdlib.h>
int main(void){

    int **p, **q;
    int i, j, s, t,c ;


    p = (int**)calloc(5, sizeof(int));
    for(i=0; i < 5 ; i++){
            p[i]=(int*)calloc(8,sizeof(int));
    }

    q = (int**)calloc(2,sizeof(int));

    for(i=0;i<2;i++){
            q[i] =(int*)calloc(4,sizeof(int));
    }
    printf("\nPreencha a matriz:\n");


    s=0;





    c = 1;
    while(c <= 5){
            t = 0;
            for(i=0;i<2;i++){
                    for(j=0;j<4;j++){
                            scanf("%d",&q[i][j]);

                    }
                }

                for(i = 0 ; i < 2 ; i++){
                    for(j = 0 ; j < 4 ; j++){
                            p[s][t]= q[i][j];
                            t=t+1;
                    }
                }

                s = s+1;
                c = c+1;
    }


    for(i=0;i<5;i++){
            printf("\n");
                for(j=0;j<8;j++){
                        printf(" %d ",p[i][j]);
                }
    }


    free(p);
    free(q);
}


