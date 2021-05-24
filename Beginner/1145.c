#include <stdio.h>

int main()
{
    int x,y;
    int i,j;
    int count=1;
    int itr;
    scanf("%d %d",&x,&y);
    if(y%x==0){
        itr=y/x;
    }
    else{
        itr=y/x+1;
    }
    for(i=1;i<=itr;i++){
        for(j=1;j<=x;j++){
            if(j==x && count<=y){
                printf("%d",count);
            }
            else if(count<=y){
                printf("%d ",count);
            }
            else{
                continue;
            }
            count++;
        }
        printf("\n");

    }


    return 0;
}
