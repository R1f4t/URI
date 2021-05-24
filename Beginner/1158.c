#include <stdio.h>


int main()
{
    int n;
    int i,j,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        int sum=0,count=0;
        for(j=x;;j++){
            if(count==y){
                printf("%d\n",sum);
                break;
            }
            if(j%2!=0){
                sum+=j;
                count++;
            }
        }
    }

    return 0;
}
