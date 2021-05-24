#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,x,y;
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        int j,x1,y1,sum=0;
        x1=(x>y)?y:x;
        y1=(y>x)?y:x;
        for(j=x1+1;j<y1;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
