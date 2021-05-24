#include <stdio.h>

int main()
{
    int n,k,front;
    scanf("%d %d",&n,&k);
    int i,j,l;
    int a[1001*100],w[1001],dp[1001];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        w[i]=a[i];
        dp[i]=0;
    }
    //printf("\n");
    for(i=0;i<k-1;i++){
        front=0;
        for(j=0;j<n*2;j++){
            a[j]=a[j%n];
            if(j>=n-1 && j<=n*2-1){
                dp[front]=a[j];
                front++;
            }
        }
        for(j=0;j<n;j++){
            w[j]+=dp[j];
            a[j]=dp[j];
            //printf("%d ",dp[j]);
        }
        //printf("\n");
    }
    //printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",w[i]);
    }

    return 0;
}
