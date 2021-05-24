#include <stdio.h>

int main()
{
    int age;
    int count=0;
    double avg,sum=0.0;
    while(1){
        scanf("%d",&age);
        if(age<0){
            avg=sum/count;
            printf("%.2lf\n",avg);
            break;
        }
        sum+=age;
        count++;
    }


    return 0;
}
