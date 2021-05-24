#include <stdio.h>

int main()
{
    int a;
    double b,con;

    scanf("%d %lf",&a,&b);

    con=a/b;

    printf("%.3lf km/l\n",con);

    return 0;
}
