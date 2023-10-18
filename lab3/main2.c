#include<stdio.h>
double wyraz_1,wyraz_2,r,suma;
int i;
_Bool walidacja(double a,double b){
    for (;;) {
        if(a==wyraz_2)
            return 1;
        else if (wyraz_2>wyraz_1 && a>wyraz_2)
            return 0;
        else if(wyraz_2<wyraz_1 && a<wyraz_2)
            return 0;
        a+=b;
    }
}
int main(){
    printf("Podaj pierwszy wyraz ciągu: ");
    scanf("%lf",&wyraz_1);
        printf("Podaj ostatni wyraz ciągu: ");
    scanf("%lf",&wyraz_2);
        printf("Podaj rórznicę wyrazów ciągu: ");
    scanf("%lf",&r);
    if (walidacja(wyraz_1,r)==0){
        printf("------------------------------\nPodany ciąg nie jest prawidłowy\n");
        return -1;
    }
    for (i=0; ; i++) {
        suma+=wyraz_1+r*i;
        if(wyraz_1+r*i==wyraz_2)
            break;;
    }
    printf("------------------------------\nSuma podanego ciągu wynosi:%lf\nTen ciąg jest złożony z %i wyrazów\n",suma,i+1);
}