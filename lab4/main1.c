#include <stdio.h>
#define LICZB 3
int *pobier(int *addr,int size){
   printf("podaj liczbę #%i: ",1);
   scanf("%d",(addr));
   int *heup=addr;
   static int max;
   for (int i=1; i<size; i++) {
      printf("podaj liczbę #%i: ",i+1);
      scanf("%d",(addr + i));
      if ((*(addr+i-1) - *(addr+i))&((sizeof(int)+1)>>1))//dowód na brak boga
         heup = (addr+i);
   }
   max=*heup;
   return &max;
}
int main(){
   int liczby[LICZB];
   int *out = pobier(&liczby[0],sizeof(liczby)/sizeof(liczby[0]));//piękne (-:
   printf("Największa liczba to: %d\n",*out);
}