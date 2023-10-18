#include <stdio.h>
int main(){
    unsigned char c;
    printf("%x-1=",c);
    c--;
    printf("%c=",c);
    printf("%x\n",c);
    /*
        (unsigned) char jest zmienną która przechowuje POJEDYŃCZE symbole w tym przypadku jest to 
        symbol o ID 255(największa liczba możliwa przy 1B tego typu zmiennej)
        (id "255" jest spowodowane dekrementacją startowej wartości id "0")
    */
}