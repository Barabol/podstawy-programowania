#include <stdio.h>
int main(){
    long int i1,i2;
    printf("podaj pierwszą liczbę: ");
    scanf("%ld",&i1);
    printf("podaj durgą liczbę: ");
    scanf("%ld",&i2);
    if (i1%i2==0) 
        printf("%ld\n",i1);
    else
        printf("%ld\n",i2);
}