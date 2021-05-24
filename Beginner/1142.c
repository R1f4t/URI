#include <stdio.h>


int main()
{
    int n,i,j;
    int count=1;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            if(j==3){
                printf("PUM");
            }
            else{
                printf("%d ",count);
            }
            count++;
        }
        printf("\n");
    }

    return 0;
}
