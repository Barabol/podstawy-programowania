#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define DT 30
short int tabela[DT];
void fill_table(void){
   int help;
   for (int x=0; x<DT; x++) {
      help=rand();
      //printf("%i\n",help);
      if(help & 0x100)
         tabela[x]=((help%101)*-1);
      else
         tabela[x]=(help%101);
   }
}
void avg(void){
   double avrg=0;
   for (int x=0; x<DT; x++) {
      avrg+=tabela[x];
   }
   avrg/=DT;
   printf("Średnia wynosi: %lf\n",avrg);
}
void print_table(void){
   for (int x=0; x<DT; x++) {
      printf("tabela[%i] = %i\n",x,tabela[x]);
   }   
}
void odchylenie(void){
   double avrg=0;
   double wynik=0;
   for (int x=0; x<DT; x++) {
      avrg+=tabela[x];
   }
   avrg/=DT;
   double dziwactwo=0,suma=0;
   for (int x=0; x<DT; x++) {
      dziwactwo=tabela[x]-avrg;
      suma += dziwactwo*dziwactwo;
   }
   wynik = sqrt(suma/DT);
   printf("Odchylenie wynosi: %f\n",wynik);
}
void min_max(void){
   short int min=tabela[0],max=tabela[0];
   for (int x=1; x<DT; x++) {
      if (min>tabela[x])
         min=tabela[x];
      if (max<tabela[x])
         max=tabela[x];
   }
   printf("Najmniejsza wartość w tej tabeli to: %i a największa to: %i\n",min,max);
}
int main(){
   srand(time(NULL));
   fill_table();
   print_table();
   avg();
   odchylenie();
   min_max();
}