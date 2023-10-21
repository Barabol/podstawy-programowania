#include <stdio.h>
char ciag[]={'a','b','b','a'};
_Bool pobier(){
   char pobrane;
   short int x,index=0;
   _Bool found=0;
   for (x=0; x<10;x++ ) {
      goto kekw;
      back:
      goto val;
      back2:
      
   }
   return found;
   kekw:
      printf("Podaj #%i znak: ",x+1);
      scanf(" %c",&pobrane);
      goto back;
   val:
      if(found==0 && ciag[index]==pobrane){
            index++;
            if (index==4) 
               found=1;
      }
      goto back2;
}
int main(){
   if(pobier())
      printf("--- WYKRYTO CIĄG ZNAKÓW <%s> ---\n",ciag);
   else
    printf("\n");
}