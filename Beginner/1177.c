#include <stdio.h>

int main()
{
    int n;
    int a[1001];
    scanf("%d",&n);
    int i,num=0;
    for(i=0;i<1000;i++){
        if(num==n-1){
            printf("N[%d] = %d\n",i,num);
            num=0;
        }
        else{
            printf("N[%d] = %d\n",i,num);
            num++;
        }
    }

    return 0;
}
