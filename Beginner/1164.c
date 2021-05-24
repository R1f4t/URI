#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long int num;
    int i,j;
    for(i=0;i<n;i++){
        scanf("%lld",&num);
        long long int tot=0;
        for(j=1;j<=num/2;j++){
            if(num%j==0){
                tot+=j;
            }
        }
        if(tot==num){
            printf("%lld eh perfeito\n",num);
        }
        else{
            printf("%lld nao eh perfeito\n",num);
        }
    }

    return 0;
}
