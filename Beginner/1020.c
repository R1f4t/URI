#include <stdio.h>

int main()
{
    int num,yr,mo,da;

    scanf("%d",&num);

    yr=num/365;
    num=num%365;
    mo=num/30;
    num=num%30;
    da=num;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yr,mo,da);


    return 0;
}
