#include <stdio.h>
#define DT 4
int tabela[DT];
void wczytaj(void){
   char znaki[DT];
   for (int x=0;x<DT;x++) {
      printf("Podaj wartość #%i: ",x+1);
      scanf("%i",&tabela[x]);
      if (tabela[x]<0) 
         znaki[x]=' ';
      else
         znaki[x]='+';
   }
   printf("Działanie ma postać:\n%c%ix^3%c%ix^2%c%ix%c%i=0\n",znaki[0],tabela[0],znaki[1],tabela[1],znaki[2],tabela[2],znaki[3],tabela[3]);
}
void liczonko(void){
   double mozliwosci[DT];
   for (int x=1; x<DT; x++) {
      if(tabela[x-1]==0){
         printf("---WYKRYTO POTĘCJALNIE DZIELENIE PRZEZ ZERO---\n(wynik może być nie prawidłowy)\n");
         mozliwosci[x-1]=0;
         continue;
      }
      mozliwosci[x-1]=((double)(tabela[x])*-1)/tabela[x-1];
   }
   printf("Wartości rozwiązujące podany wielomian:\n");
   for (int x=0; x<DT; x++) {
      printf("%i) %lf\n",x,mozliwosci[x]);
   }
}
int main(){
   wczytaj();
   liczonko();
}