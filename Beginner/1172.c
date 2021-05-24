#include <stdio.h>


int main()
{
    int arr[11];
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<=0){
            arr[i]=1;
        }
        printf("X[%d] = %d\n",i,arr[i]);
    }


    return 0;
}
