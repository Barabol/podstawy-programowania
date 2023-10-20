#include <stdio.h>
char napis[3][9]={"dlogosc","szerokosc","glebokosc"};
double *get_values(){
   static double val[3];
   for (int x=0; x<3; x++) {
      printf("Podaj %s: ",napis[x]);
      scanf("%lf",&val[x]);
   }
   return val;
}
double policz(double *a){
   return 2*((*a)*(*(a+2)) + (*(a+1))*(*(a+2)) + (*a)*(*(a+1)));
}
int main(){    
   printf("pole powierzchni wynosi: %lf\n",policz(get_values()));
}