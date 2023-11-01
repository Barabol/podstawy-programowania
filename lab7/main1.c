#include <math.h>
#include <stdio.h>
#include <string.h>
char slowo[]={};
_Bool pobier(void){
   printf("Napisz słowo: ");
   scanf("%s",slowo);
   int len=strlen(slowo);
   if(len&1)
      for (int x=0, y=len-1; x<len | y>0; x++,y--) {
         if (x==(int)(len/2)+1) {
            return 0;
         }
         if(slowo[x] != slowo[y])
            return 1;
      }
   else{
      for (int x=0, y=len-1; x<len | y>0; x++,y--) {
         if(slowo[x] != slowo[y])
            return 1;
      }
      return 0;
   }
   return 1;
}
int main(){
   if(pobier())
      printf("słowo %s nie jest palindromem\n",slowo);
   else
      printf("słowo %s jest palindromem\n",slowo);
}  
