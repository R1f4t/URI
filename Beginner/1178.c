#include <stdio.h>

int main()
{
    double x,n[101];
    scanf("%lf",&x);
    int i;
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,x);
        x/=2;
    }

    return 0;
}
