#include <stdio.h>
#include <stdlib.h>


int main(void){
   char *p,c;
   int x,i;
   c='1';

   printf("Digite o tamanho da string:\n");
   scanf("%d",&x);


   p = (void*)malloc(x* sizeof(char));
   printf("Digite a string:\n");

   scanf("%s",p);



   for(i=0;i<x;i++){
       if((p[i]=='a')||(p[i]=='e') || (p[i]=='i') || (p[i]=='o')||(p[i]=='u')){
            p[i]=' ';


       }
   }
   puts(p);






   free(p);
}

