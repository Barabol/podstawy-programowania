#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TL 30
#define ZK 9
int tabela[TL];
int ilosc[ZK];
void wypelnij(void){
   for (int x=0;x<TL;x++){
      tabela[x]=rand()%ZK;
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
int main(){
   srand(time(NULL));
   wypelnij();
   wypisz();
   sortoj();
   puts("posortowana:");
   wypisz();
}