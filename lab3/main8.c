#include <stdio.h>
#define X 60
long int sqr(int a,int b){
    if(b==0)
        return 1;
    long int w=a;
    for (int i=0; i<b-1; i++) {
        w=w*a;
    }
    return w;
}
long int silnia(int a){
    long int w=1;
    for(int i=a;i>0;i--){
        w*=i;
    }
    return w;
}
int main(){
    long int wynik=0;
    int dokladnosc=3;
    printf("Podaj dokładność: ");
    scanf("%i",&dokladnosc);
    long int d1,d2,d3,d4;
    for (int n=0; n<dokladnosc; n++) {
        d1=sqr(-1,n);
        d2=sqr(X,(2*n)+1);
        d3=silnia((n*2)+1);
        d4=d1*d2;
        printf("[%li]=([-1]^n)-[%li]=(x^[2n+1])-[%li]=(![2n+1])\n",d1,d2,d3);
        printf("%li\n",d1*d2/d3);
        wynik+=d1*d2/d3;
    }
    printf("\nWYNIK: %li\n",wynik);
    
    /*
    printf("Podaj liczbę: ");
    scanf("%d",&dokladnosc);
    for(int n=0;n<dokladnosc;n++){
        printf("%li-\n",silnia(((2*n)+1)));
        //wynik+=(sqr(-1,n)*sqr(X,(2*n)+1))/silnia((n*2)+1);
    }*/
}