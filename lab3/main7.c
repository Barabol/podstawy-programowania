#include <stdio.h>
const unsigned int przedzial[2] = {0,10};
long int silnia_while(int a){
    long int w=1;
    int i=a;
    while (i>0) {
        w*=i;
        i--;
    }
    return w;
}
long int silnia_do(int a){
    long int w=1;
    int i=a;
    do{
        w*=i;
        i--;
    }while (i>0);
    return w;
}
int main(){//przedział [0,10]
    unsigned int x=przedzial[0];
    do{
        x++;
        printf("!%i = %li\n",x,silnia_do(x));
    }while(x<przedzial[1]);
}