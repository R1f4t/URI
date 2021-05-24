#include <stdio.h>

int main()
{
    int t;
    int i,j;
    double ra,rb;
    int a,b;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%lf%lf",&a,&b,&ra,&rb);
        j=0;
        while(a<=b){
            a=a+((a*ra)/100);
            b=b+((b*rb)/100);
            j++;
            if(j>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(j<=100){
            printf("%d anos.\n",j);
        }
    }

    return 0;
}
