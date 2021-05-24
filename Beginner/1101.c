#include <stdio.h>

int main()
{
    int m,n;
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0||m<0||n==0||n<0){
            break;
        }
        else{
            int b,s;
            b=m>n?m:n;
            s=m<n?m:n;
            int sum=0;
            int i;
            for(i=s;i<=b;i++){
                sum+=i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",sum);
        }
    }

    return 0;
}
