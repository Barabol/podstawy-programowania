#include <stdio.h>
#define PI 3.1415
double calculate_area(double r) {
    return PI*r*r;
}
double radius;
int main() {
    puts("Podaj długość promienia koła");
    scanf("%lf",&radius);
    if(radius>0.0)
        printf("Pole koła o promieniu %lf cm wynosi %lf cm^2.\n" ,radius,calculate_area(radius));
    else
        puts("Podana długość promienia jest nieprawidłowa.");
    return 0;
}
