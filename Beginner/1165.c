#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    int num,j;
    while(i<n){
        scanf("%d",&num);
        int flag=0;
        for(j=2;j<=num/2;j++){
            if(num%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d nao eh primo\n",num);
        }
        else{
            printf("%d eh primo\n",num);
        }
        i++;
    }

    return 0;
}
