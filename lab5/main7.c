#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DT 5
int tabela[DT];
void wczytaj(void){
   for (int x=0;x<DT;x++) {
      printf("Podaj wartość #%i: ",x+1);
      scanf("%i",&tabela[x]);
   }
}
void wyswietl(void){
   printf("|");
   for (int x=0; x<DT; x++)
      printf(" %i |",tabela[x]);
   printf("\n");
}
void maszyna_losojaca_totolotek(void){
   int buffor;
   short int rn[2];
   for (int x=0; x<DT*((rand()%DT*3)+1); x++) {
      rn[0]=rand()%DT;
      rn[1]=rand()%DT;
      if(rn[0]==rn[1]){
         x--;
         continue;
      }
      buffor=tabela[rn[0]];
      tabela[rn[0]]=tabela[rn[1]];
      tabela[rn[1]]=buffor;
   } 
}
int main(){
   wczytaj();
   puts("przed losowaniem");
   wyswietl();
   srand(time(NULL));
   maszyna_losojaca_totolotek();
   printf("po losowaniu\n");
   wyswietl();
}