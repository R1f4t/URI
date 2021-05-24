#include <stdio.h>

int main()
{
    int ch,q;
    double total;

    scanf("%d %d",&ch,&q);

    if(ch==1)
    {
        total=4.00*q;
        printf("Total: R$ %.2lf\n",total);
    }
    else if(ch==2)
    {
        total=4.50*q;
        printf("Total: R$ %.2lf\n",total);
    }
    else if(ch==3)
    {
        total=5.00*q;
        printf("Total: R$ %.2lf\n",total);
    }
    else if(ch==4)
    {
        total=2.00*q;
        printf("Total: R$ %.2lf\n",total);
    }
    else
    {
        total=1.50*q;
        printf("Total: R$ %.2lf\n",total);
    }

    return 0;
}
