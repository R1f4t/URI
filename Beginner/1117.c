#include <stdio.h>

int main()
{
    double n,sum=0.0,mean;
    int count=0;
    while(count<2){
        scanf("%lf",&n);
        if(n<0 || n>10){
            printf("nota invalida\n");
        }
        else{
            sum+=n;
            count++;
        }
    }
    mean=sum/count;
    printf("media = %.2lf\n",mean);

    return 0;
}
