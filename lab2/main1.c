#include <stdio.h>
#define LICZB 3
int main(){
    int liczby[LICZB];
    int max=0;
    for(int numer=0; numer<LICZB; ++numer){
        printf("Podaj %i# liczbę: " ,numer+1);
        scanf("%i",&liczby[numer]);
        if(numer>0 && max<liczby[numer])
            max = liczby[numer];
        else if(numer==0)
            max = liczby[numer];
    }
    printf("największa liczba to: %i\n",max);
    return 0;
}