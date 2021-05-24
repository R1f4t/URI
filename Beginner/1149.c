#include <stdio.h>

int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    while(n<=0){
        scanf("%d",&n);
    }
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=a;
        a++;
    }
    printf("%d\n",sum);

    return 0;
}
