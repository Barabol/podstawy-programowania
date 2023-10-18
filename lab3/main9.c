#include <stdio.h>
#define PRECYZJA 999999999
long int sqr(int b){
   if (b&1)
      return -1; 
   return 1;
}
int main(){
   double wynik=0;
   for(double x=0;x<PRECYZJA;x++){
      wynik+=(sqr(x+2)*(1/((2*(x+1))-1)));
   }
   printf("pi = %lf przy precyzji = %i\n",wynik*4,PRECYZJA);
}