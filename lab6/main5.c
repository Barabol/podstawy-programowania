#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TL 30
#define ZK 11
int tabela[TL];
int ilosc[ZK];
void wypelnij(void){
   for (int x=0;x<TL;x++){
      tabela[x]=(rand()%ZK)-5;
      ilosc[tabela[x]]++;
   }
}
void wypisz(void){
   printf("|");
   for (int x=0; x<TL; x++)
      printf(" %i |",tabela[x]);
   printf("\n");
}
void wypisz_ilosc(void){
   printf("liczba / ile razy się pojawia\n");
   for (int x=0; x<ZK; x++)
      printf("| %i | %i |\n",x-5,tabela[x]);
}
int main(){
   srand(time(NULL));
   wypelnij();
   wypisz();
   wypisz_ilosc();
}