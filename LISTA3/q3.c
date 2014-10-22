#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *p, i=0;




    p = (int*)malloc(5*sizeof(int));


    do{
            scanf("%d",p[i]);
            i++;
    }while(i!=5);

    for(i=0;i<5;i++){
            printf("%d\n",p[i]);
    }







free(p);
}
