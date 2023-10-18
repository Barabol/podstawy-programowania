#include <stdio.h>
unsigned char znaki[2];
_Bool req=0;
char kekw(){
    if(req)
        printf("Podaj znak #2: ");
    scanf("%c",&znaki[1]);
    if ((int)(znaki[1])==10){
        req=1;
        return kekw();
    }
    printf("%i",znaki[1]);
    return znaki[1];
}
int main(){
    
    printf("Podaj znak #1: ");
    scanf("%c",&znaki[0]);
    kekw();
    // printf("Podaj znak #2: ");
    // scanf("%c",&znaki[1]);
    printf("\n----znak#1-----\nASCII: %i\nhex: %x\ndec: %d\n----znak#2-----\nASCII: %i\nhex: %x\ndec: %d\n\nDziałania:\n",znaki[0],znaki[0],znaki[0],znaki[1],znaki[1],znaki[1]);
    printf("------exor-----\nhex: %x\ndec: %d\n",znaki[0]^znaki[1],znaki[0]^znaki[1]);
    printf("------or-------\nhex: %x\ndec: %d\n",znaki[0]|znaki[1],znaki[0]|znaki[1]);
    printf("------and------\nhex: %x\ndec: %d\n",znaki[0]&znaki[1],znaki[0]&znaki[1]);
    return 0;
}