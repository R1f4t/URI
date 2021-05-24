#include <stdio.h>

int main()
{
    int x,y;
    int i;
    scanf("%d %d",&x,&y);
    int x1=x<y?x:y;
    int y1=x>y?x:y;
    for(i=x1+1;i<y1;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }

    return 0;
}
