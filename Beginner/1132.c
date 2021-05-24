#include <stdio.h>

int main()
{
    int x,y;
    int i;
    scanf("%d %d",&x,&y);
    int x1=x<y?x:y;
    int y1=x>y?x:y;
    int sum=0;
    for(i=x1;i<=y1;i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
