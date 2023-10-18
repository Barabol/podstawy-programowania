#include<stdio.h>
double wyraz_1,wyraz_2,r,suma;
int i;
double sqr(double i, int g){
    double w=i;
    for (int a=0; a>g; a++) {
        w*=i;
    }
    return w;
}
_Bool walidacja(double a,double b){
    if(a==b)
        return 1;
    for (int i=1;;i++) {
        if(a==wyraz_2)
            return 1;
        else if (wyraz_2>wyraz_1 && a>wyraz_2)
            return 0;
        else if(wyraz_2<wyraz_1 && a<wyraz_2)
            return 0;
        a*=sqr(r,i);
        //printf("e%lf",a);
    }
}
int main(){
    printf("Podaj pierwszy wyraz ciągu: ");
    scanf("%lf",&wyraz_1);
        printf("Podaj ostatni wyraz ciągu: ");
    scanf("%lf",&wyraz_2);
        printf("Podaj rórznicę wyrazów ciągu: ");
    scanf("%lf",&r);
    if (r==1 || r==0 || walidacja(wyraz_1,r)==0){
        printf("------------------------------\nPodany ciąg nie jest prawidłowy\n");
        return -1;
    }
    if(wyraz_1 == wyraz_2){
        printf("------------------------------\nSuma podanego ciągu wynosi:%lf\nTen ciąg jest złożony z %i wyrazów\n",wyraz_1,1);
        return 0;
    }
    double a=wyraz_1;
    suma=wyraz_1;
    int i=1;
    for (;;i++) {
        a*=sqr(r,i);
        suma+=a;
        if(a==wyraz_2)
            break;
    }
    printf("------------------------------\nSuma podanego ciągu wynosi:%lf\nTen ciąg jest złożony z %i wyrazów\n",suma,i+1);
}