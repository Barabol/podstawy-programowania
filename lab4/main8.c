#include <stdio.h>
#define LICZBY 2
int *podane(){
   static int w[LICZBY];
   for (int x=0; x<LICZBY; x++) {
      start:
         printf("Podaj liczbe #%i: ",x+1);
         scanf("%d",&w[x]);
         if(w[x]<=0)
            goto start;
   }
   return w;
}
int mod(int dzielona,int przez){
   if (((dzielona-przez) < 0))
      return dzielona;
   else if((dzielona-przez) == 0)
      return 0;
   int w=dzielona-przez;
   return mod(w,przez);
}
int main(){
   int *a=podane();
   printf("%i %% %i = %i\n",*a,*(a+1),mod(*a, *(a+1)));
}