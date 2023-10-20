#include <math.h>
#include <stdio.h>
const char text[][30]={"podaj pierwszy wyraz ciągu: ",
"podaj ostatni wyraz ciągu: ",
"podaj iloczyn ciągu: ",
"podaj różnicę ciągu: "};
_Bool wybor(){
   int a;
   wal:
      printf("Wybierz ciąg \n1-ciąg artmetyczny\n2-ciąg geometryczny\n>");
      scanf("%d",&a);
      if((a&2 && a&1) || (a>>2 & ~0) || a&0)
         goto wal;
   return --a;
}
double liczba(int nr){
   double podane;
   printf("%s",text[nr]);
   scanf("%lf",&podane);
   if(podane==0)
      return liczba(nr);
   return podane;
}
void art(){
   double liczby[3];
   double y,b;
   for(int x=0;x<2;x++)
      liczby[x] = liczba(x);
   liczby[2] = liczba(3);
   for (int x=0;; x++) {
      b=liczby[0]+(liczby[2]*x);
      y+=b;
      if (b==liczby[1]){
         printf("suma podanego ciągu wynosi: %lf\n",y);
         return;
      }
      else if ((liczby[2]>0 && b>liczby[1]) || (liczby[2]<0 && b<liczby[1])){
         printf("podany ciąg jest nie prawidłowy\n");
         return;
      }
   }
}
void geo(){
   double liczby[3];
   double y,b;
   for(int x=0;x<3;x++)
      liczby[x] = liczba(x);
   for (int x=0; ; x++) {
      b=liczby[0]+(liczby[2]*x);
      y+=b;
      if (b==liczby[1]){
         printf("suma podanego ciągu wynosi: %lf\n",y);
         return;
      }
      else if ((liczby[2]>0 && b>liczby[1]) || (liczby[2]<0 && b<liczby[1])){
         printf("podany ciąg jest nie prawidłowy\n");
         return;
      }
   }
}
int main(){
   if(wybor())
      geo();
   else
      art();
   return 1;
}