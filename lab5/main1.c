#include <stdio.h>
void wartosci(){
   enum dd{
      l1,l2,l3,
      l4=2,l5=2,
      l6=15,l7=38,l8=0x16,l9=78
   };
   puts("NIE ZADEKLAROWANE");
   printf("%i\n",l1);
   printf("%i\n",l2);
   printf("%i\n",l3);
   puts("ZADEKLAROWANE");
   printf("%i\n",l4);
   printf("%i\n",l5);
   puts("DOWOLNE WARTOŚCI");
   printf("%i\n",l6);
   printf("%i\n",l7);
   printf("%i\n",l8);
   printf("%i\n",l9);
}
int main(){
   wartosci();
}
