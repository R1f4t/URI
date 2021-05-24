#include <stdio.h>

void calc()
{
    double n,sum=0.0,mean;
    int c=0;
    while(1){
        if(c==2){
            break;
        }

        scanf("%lf",&n);

        if(n<0 || n>10){
            printf("nota invalida\n");
        }

        else{
            sum+=n;
            c++;
        }
    }
    mean=sum/c;
    printf("media = %.2lf\n",mean);
}

int main()
{
    int flag=0;
    int x;
    while(1){
        if(flag==0){
            calc();
            flag=1;
        }
        else{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
            if(x==2){
                break;
            }
            else if(x==1){
                flag=0;
            }
            else{
                continue;
            }
        }

    }

    return 0;
}
