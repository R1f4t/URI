#include <stdio.h>

int main()
{
    int x,z;
    scanf("%d",&x);
    while(1){
        scanf("%d",&z);
        if(z>x){
            break;
        }
    }
    int i,sum=0,count=0;
    for(i=x;;i++){
        sum+=i;
        count++;
        if(sum>z){
            break;
        }
    }
    printf("%d\n",count);


    return 0;
}
