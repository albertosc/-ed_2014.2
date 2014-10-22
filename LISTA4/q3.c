#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char *p;
    int v[5]={0,0,0,0,0}, i=0,c;



    p =(char*)malloc(100);
    do{

            printf("Entre com uma string ate 100 caracteres:\n");
             gets(p);



             puts(p);






             c=strcmp(p,"fim");
             if(c==0){
                    while(p[i]!='\0'){
                            if(p[i]=='a'){
                                    v[0]=v[0]+1;
                            }
                            if(p[i]=='e'){
                                    v[1]=v[1]+1;
                            }
                            if(p[i]=='i'){
                                    v[2]=v[2]+1;
                            }
                                if(p[i]=='o'){
                                    v[3]=v[3]+1;
                            }
                            if(p[i]=='u'){
                                    v[4]=v[4]+1;
                            }
                            i=i+1;
                    }
             }
    }while(c != 0);


    free(p);
}



