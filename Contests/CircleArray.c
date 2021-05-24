#include <stdio.h>

int main()
{
    int n,k,i,j,front;
    int a[101],dp[101];

    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        dp[i]=0;
        //printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<k;i++){
        front=0;
        for(j=0;j<n*2;j++){
            a[j]=a[j%n];
            if(j>=n-1 && j<=n*2-1){
                dp[front]=a[j];
                front++;
            }
        }
        for(j=0;j<n;j++){
            a[j]=dp[j];
            printf("%d ",dp[j]);
        }
        printf("\n");
    }

    /*for(i=0;i<n;i++){
        printf("%d ",dp[i]);
    }*/


    return 0;
}
