#include <stdio.h>
#include <stdlib.h>
#include <time.h>
short int tabela[30];

void fill_table(void){
   int help;
   for (int x=0; x<30; x++) {
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
   for (int x=0; x<30; x++) {
      avrg+=tabela[x];
   }
   avrg/=30;
   printf("Średnia wynosi: %lf\n",avrg);
}
void print_table(void){
   for (int x=0; x<30; x++) {
      printf("tabela[%i] = %i\n",x,tabela[x]);
   }   
}
int main(){
   srand(time(NULL));
   fill_table();
   print_table();
   avg();
}