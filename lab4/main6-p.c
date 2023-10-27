#include <math.h>
#include <stdio.h>
#include <stdlib.h>
char pi[]={};
int pi2;
double sqr(double b,int a){
   double w=b;
   for (int x=1; x<a; x++) {
      w*=b;
   }
   return w;
}
int pobier(int *addr){
   char helper;
   int x;
   printf("Podaj precyzję(przkłady: 1, 0.1, 0.01, itd): ");
   for (x=0; helper!=10; x++) {
      scanf("%c",&helper);
      if(helper == '0' && x!=1)
         continue;
      else if (helper=='1')
         break;
      else if (((helper!='0') ^ (x==1 && helper=='.') || (x==1 && helper!='.'))){
         puts("Podano błędną dokładność");
         return 1;   
      }
   }
   scanf("%c",&helper);
   if(x>0)
      x--;
   *addr=x;
   return 0;
}
void licz_pi2(int *precyjza){
   double pi3 = (M_PI-3)*sqr(10,*precyjza);
   //printf("\n\n--- %lf\n",M_PI*sqr(10,*precyjza));
   pi2 = round(pi3);
}
int main(){
   int precyzja;
   if (pobier(&precyzja))
      return 1;
   licz_pi2( &precyzja);
   //ciag(&precyzja);
   printf("Pi przy precyjzi %i wynosi: 3.%d\n",precyzja,pi2);
}