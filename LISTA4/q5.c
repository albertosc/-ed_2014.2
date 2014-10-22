#include <stdio.h>
#include <stdlib.h>
int main(void){

    int *p, **q;
    int i, j, s,c ;


    p = (int*)calloc(5, sizeof(int));


    q = (int**)calloc(2,sizeof(int));

    for(i=0;i<2;i++){
            q[i] =(int*)calloc(2,sizeof(int));
    }
    printf("\nPreencha a matriz:\n");


    s=0;





    c = 1;
    while(c <= 5){

            for(i=0;i<2;i++){
                    for(j=0;j<2;j++){
                            scanf("%d",&q[i][j]);
                            p[s]=p[s]+q[i][j];

                    }
                }


                s = s+1;
                c = c+1;
    }


    for(i=0;i<5;i++){
            printf(" %d ",p[i]);



    }


    free(p);
    free(q);
}


