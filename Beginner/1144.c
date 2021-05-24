#include <stdio.h>

int main()
{
    int n,i,j;
    int mul,cross,mu2,cros2;
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

        mu2=i;
        cros2=1;
        for(j=1;j<=3;j++){
            cros2*=mu2;
            if(j==3){
                printf("%d",cros2+1);
            }
            else if(j==1){
                printf("%d ",cros2);
            }
            else{
                printf("%d ",cros2+1);
            }

        }
        printf("\n");

    }

    return 0;
}

