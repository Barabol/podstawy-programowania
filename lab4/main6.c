#include <stdio.h>
long int sqr(int b){
   if (b&1)
      return -1; 
   return 1;
}
int main(){
   double wynik=0;
   int precyzja;
   printf("Podaj precyzję: ");
   scanf("%d",&precyzja);
   for(double x=0;x<precyzja;x++){
      wynik+=(sqr(x+2)*(1/((2*(x+1))-1)));
   }
   printf("pi = %lf przy precyzji = %i\n",wynik*4,precyzja);
}