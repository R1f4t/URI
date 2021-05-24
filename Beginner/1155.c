#include <stdio.h>

int main()
{
    double count,s=0;
    double i;
    for(i=1;i<=100;i++){
        s+=1/i;
    }
    printf("%.2lf\n",s);

    return 0;
}
