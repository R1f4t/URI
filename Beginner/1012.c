#include <stdio.h>
#define pi 3.14159

int main()
{
    double a,b,c,rec_tri,circle,squre,rect,trap;

    scanf("%lf %lf %lf",&a,&b,&c);

    rec_tri=0.5*a*c;
    circle=pi*c*c;
    trap=((a+b)/2)*c;
    squre=b*b;
    rect=a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",rec_tri,circle,trap,squre,rect);

    return 0;
}
