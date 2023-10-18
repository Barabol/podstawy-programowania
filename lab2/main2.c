#include <stdio.h>
#define LICZB 3
int main(){
    char znaki[LICZB];
    int max=0;
    int liczba;
    for(int i=0; i<LICZB; ++i){
        if(znaki[i]!=10)
            printf("Podaj %i# znak: " ,i+1);
        scanf("%c",&znaki[i]);
        liczba = (int)(znaki[i]);
        if(liczba==10)
            i--;
        if(i>0 && max<liczba)
            max = liczba;
        else if(i==0)
            max = liczba;
    }
    printf("najdalszy znak początku alfabetu to: %c\n",(char)(max));
    return 0;
}