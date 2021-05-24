#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    int count =1;
    int temp;
    while(1){
        if(count>n){
            printf("\n");
            break;
        }
        else{
            if(count==n){
                printf("%d",first);
            }
            else{
                printf("%d ",first);
            }
            temp=first;
            first=second;
            second+=temp;
            count++;
        }
    }

    return 0;
}
