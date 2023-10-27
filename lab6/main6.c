#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TL 20
#define ZK 9
int tabela[TL];
int ilosc[ZK];
void wypelnij(void){
   for (int x=0;x<TL;x++){
      tabela[x]=(rand()%ZK)-4;
      ilosc[tabela[x]]++;
   }
}
void wypisz(void){
   printf("|");
   for (int x=0; x<TL; x++)
      printf(" %i |",tabela[x]);
   printf("\n");
}
void sortoj(void){// chyab się to nazywało sortowanie bąbelkowe /:
   int buffor;
   for (int x=0; x<TL; x++) {
      for (int y=0; y<TL-1; y++) {
         if (tabela[y]<tabela[y+1]){
            buffor=tabela[y];
            tabela[y]=tabela[y+1];
            tabela[y+1]=buffor;
         }
      }
   }
}
void mediana(void){
   if(TL&1)
      printf("mediana: %i\n",tabela[(int)(TL/2)+1]);
   else{
      double l1=tabela[(int)(TL/2)],l2=tabela[(int)(TL/2)-1];
      printf("mediana: %lf\n",(l1+l2)/2);
   }
}
void kwartyl(int numer){
   if(numer>4 || numer<1 || TL&1)
      return;
   printf("%i# Kwartyl zawiera wartości:\n",numer);
   for (int x=0; x<(int)(TL/4); x++) { 
      printf("| %i ",tabela[x+(numer-1)*(int)(TL/4)]);
   }
   printf("|\n");
}
int main(){
   srand(time(NULL));
   wypelnij();
   wypisz();
   sortoj();
   puts("posortowana:");
   wypisz();
   mediana();
   kwartyl(1);
   kwartyl(3);
}