#include <stdio.h>
int main(){
    int i1;
    printf("podaj liczbę: ");
    scanf("%d",&i1);
    switch(i1&1){
        case 0:
            printf("parzyste");
        break;
        case 1:
            printf("nie parzyste");
        break;
    }
}