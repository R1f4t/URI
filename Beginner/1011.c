#include <stdio.h>
#define pi 3.14159

int main()
{
    int R;
    double volume;

    scanf("%d",&R);

    volume = (4.0/3)*pi*R*R*R;

    printf("VOLUME = %.3lf\n",volume);

    return 0;
}
