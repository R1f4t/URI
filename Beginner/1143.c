#include <stdio.h>

int main()
{
    int n,i,j;
    int mul,cross;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mul=i;
        cross=1;
        for(j=1;j<=3;j++){
            cross*=mul;
            if(j==3){
                printf("%d",cross);
            }
            else{
                printf("%d ",cross);
            }

        }
        printf("\n");
    }

    return 0;
}
