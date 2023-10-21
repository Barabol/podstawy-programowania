#include <math.h>
#include <stdio.h>
char napis[2][16]={"dlugosc podstawy","wysokosc"};
double *get_values(){
   static double val[2];
   for (int x=0; x<2; x++) {
      printf("Podaj %s: ",napis[x]);
      scanf("%lf",&val[x]);
   }
   return val;
}
double policz(double *a){
   double podstawa,bok;
   podstawa = *a**a;
   bok= sqrt(((*a/2)*(*a/2))+(*(a+1)**(a+1)))*2;
   return bok+podstawa;
}
int main(){    
   printf("pole powierzchni wynosi: %lf\n",policz(get_values()));
}