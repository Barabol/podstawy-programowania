#include <stdio.h>
const char lele[][11]={"zero","jeden","dwa","trzy","cztery","pięć","sześć","siedem","osiem","dziewięć","dziesięć"};
const char keke[][11]={"naście","dziesiąt","set"};
int main(){
    int odlicz_od;
    printf("Od jakiej liczby rozpocząć odliczanie (max 99): ");
    scanf("%d",&odlicz_od);
    if (odlicz_od<0)
        return -1;
    int i = odlicz_od;
    do{
        if(i<11)
            printf("%s\n",lele[i]);
        else if(i<20){
            switch (i) {
                case 11:
                    printf("jedenaście\n");
                    break;
                case 14:
                    printf("czternaście\n");
                    break;
                case 15:
                    printf("piętnaście\n");
                    break;
                case 16:
                    printf("szesnaście\n");
                    break;
                case 19:
                    printf("dziewiętnaście\n");
                    break;
                default:
                    printf("%s%s\n",lele[i-10],keke[0]);
                    break;
            }
        }
        else if(i<100) {
            switch ((int)(i/10)) {
                case 2:
                    if(i%10!=0)
                        printf("dwadzieścia %s\n",lele[i%10]);
                    else
                        printf("dwadzieścia\n");
                    break;
                case 3:
                    if(i%10!=0)
                        printf("trzydzieści %s\n",lele[i%10]);
                    else
                        printf("trzydzieści\n");
                    break;
                case 4:
                    if(i%10!=0)
                        printf("czterdzieści %s\n",lele[i%10]);
                    else
                        printf("czterdzieści\n");
                    break;
                default:
                    if(i%10!=0)
                        printf("%s%s %s\n",lele[i/10],keke[1],lele[i%10]);
                    else
                        printf("%s%s\n",lele[i/10],keke[1]);
                    break;
            }
        }
        i--;
    }while (i>-1);
    return 0;
}
/*
    zero    |1x         |x0         |x00
    jeden   |+aście     |           |sto
    dwa     |+naście    |+dzieścia +|dwieście
    trzy    |+naście    |+dzieści   |+sta
    cztery  |+naście    |-y +dzieści|+sta
    pięć    |+naście    |+dziesiąt  |+set
    sześć   |+naście    |+dziesiąt  |+set
    siedem  |+naście    |+dziesiąt  |+set
    osiem   |+naście    |+dziesiąt  |+set
    dziewięć|-ć+tnaście |+dziesiąt  |+set
    dziesięć|dwadzieścia|           |+set
*/