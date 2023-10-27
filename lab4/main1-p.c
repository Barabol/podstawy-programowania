#include <stdio.h>
void pobieranie(int *a){
   for (int x=0; x<3; x++) {
      printf("Podaj liczbę #%i: ",x+1);
      scanf("%d",(a+x));
   }
}
int *sortowanie(int l1,int l2,int l3){
   int *arr[3]={&l1,&l2,&l3};
   static int max;
   for (int x=0,*buff; x<2; x++) {
      if (*arr[0]<*arr[x+1]){
         buff=arr[0];
         arr[0]=arr[x+1];
         arr[x+1]=buff;
      }
   }
   max=*arr[0];
   return &max;
}
int main(){
   int pobier[3];
   pobieranie(&pobier[0]);
   printf("Największą liczbą jest: %i\n",*sortowanie(pobier[0],pobier[1],pobier[2]));
}