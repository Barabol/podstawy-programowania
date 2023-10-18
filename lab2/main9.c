#include <stdio.h>
int main(){
    int i1=1,i2=2;
    for(int i=0;i<10;i++){
        for(int x=0;x<10;x++){
            printf("%x <-PRAWO MORGANA | POPRAWNY WYNIK-> ",~(~(i1+i) | ~(i2+x)));
            printf("%x",(i1+i)&(i2+x));
            if((~(~(i1+i) | ~(i2+x)))==((i1+i)&(i2+x)))
                printf(" git");
            printf("\n");
        }
    }
}