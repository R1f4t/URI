#include <stdio.h>

int main()
{
    int num;
    int i;

    while(1){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        else{
            int sum=0,count=0;
            for(i=num;;i++){
                if(count==5){
                    printf("%d\n",sum);
                    break;
                }
                if(i%2==0){
                    sum+=i;
                    count++;
                }
            }
        }
    }

    return 0;
}
