#include <stdio.h>
const char dni[][13]={
   {112,-1,-1,-5,-4,-1,22,-17,-8,11,-7,6,100},
   {119,-3,-5,3,-13,6,100},
   {115,-1,-3,-11,-3,100},
   {99,23,-3,-22,17,2,-15,6,100},
   {112,-7,-8,19,-15,6,100},
   {115,-4,-13,13,5,-19,100},
   {110,-5,-4,-1,22,-17,-4,7,-11,100},
};
int *input(){
   static int *in;
   int buff;
   kekw:
      printf("podaj numer dnia tygodnia(1-7): ");
      scanf("%d",&buff);
      if ((buff>>3)&(~0) || !(buff&7))
         goto kekw;
   in=&buff;
   return in;
}
void dzien(int a){
   a--;
   char nazwa[13];
   nazwa[0]=dni[a][0];
   printf("%c",nazwa[0]);
   for (int x=0; x<12; x++){
      nazwa[x+1]=(nazwa[x]+dni[a][x+1]);
      printf("%c",nazwa[x+1]);
      if(dni[a][x+1]==0x64)
         goto end;
   }
   end:
      return;
}
int main(){
   int *a=input();
   dzien(*a);
   printf("\n");
}