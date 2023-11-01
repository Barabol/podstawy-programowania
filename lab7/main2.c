#include <math.h>
#include <stdio.h>
#include <string.h>
char slowa[2][40]={{},{}};
_Bool pobier(void){
   printf("Napisz pierwsze słowo: ");
   scanf("%s",slowa[0]);
   printf("Napisz drugie słowo: ");
   scanf("%s",slowa[1]);
   int len[2]={strlen(slowa[0]),strlen(slowa[1])};
   if (len[0]!=len[1])
      return 1;
   for (int x=0; x<len[0]/2; x++) {
      if (slowa[0][x] != slowa[1][len[0]-1-x])
         return 1;
   }
   return 0;
}
int main(){
   if(pobier())
      printf("słowa '%s' i '%s' nie są anagramami\n",slowa[0],slowa[1]);
   else
      printf("słowa '%s' i '%s' są anagramami\n",slowa[0],slowa[1]);
   
}  