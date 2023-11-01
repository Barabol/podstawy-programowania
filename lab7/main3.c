#include <stdio.h>
#include <string.h>
void plus(char *l,int *index,int *len){
   if (*index==-1) {
      *(l+(*len))=',';
      *(l+(*len)+1)='0';
      *(l+(*len)+2)='0';
      *(l+(*len)+3)='1';
      return;
   }
   else if ((*len)-(*index)>3) {
      for (int x=(*index)+3; ; x--) {
         if (*(l+x)=='9') 
            *(l+x)='0';
         else if (*(l+x)==',')
            continue;
         else{
            *(l+x)+=1;
            return;
         }
      }
   }
   else {
      if ((*len)-(*index)==2) {
         *(l+(*len))='0';
         *(l+(*len)+1)='1';
         return;
      }
      *(l+(*len))='1';
   }
}
_Bool pobier(char *l){
   printf("Podaj liczbę: ");
   char helper;
   int index=-1;
   int x;
   for (x=1; ; x++) {
      scanf("%c",&helper);
      if(helper==','){
         index=x;
      }
      else if(helper==10)
         break;
      else if(!((helper-48)>-1 && (helper-48)<10)){
         puts("Błędna składnia");
         return 1;
      }
      *(l+x)=helper;
   }
   plus(l,&index,&x);
   return 0;
}

int main(){
   char liczba[50]="0";
   if(pobier(&liczba[0]))
      return -1;
   printf("Podana liczba po dodaniu 0,001 to: %s\n",liczba);
}