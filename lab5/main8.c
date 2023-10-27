#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define DT 10
int tabela[DT];
void wyswietl(void){
   printf("|");
   for (int x=0; x<DT; x++)
      printf(" %i |",tabela[x]);
   printf("\n");
}
void wczytaj(void){
   for (int x=0;x<DT;x++)
      tabela[x]=rand()%21;
}
void podziel(void){
   int dt2=DT/2;
   int helper[2][DT/2];
   for (int x=0; x<dt2; x++)
      helper[0][x]=tabela[x];
   for (int x=0; x<dt2; x++)
      helper[1][x]=tabela[dt2+x];
   for (int x=0; x<dt2; x++)
      tabela[x]=helper[1][x];
   for (int x=0; x<dt2; x++)
      tabela[x+dt2]=helper[0][x];
}
int main(){
   srand(time(NULL));
   wczytaj();
   puts("Przed zamianą:");
   wyswietl();
   podziel();
   puts("Po zamianie:");
   wyswietl();
}