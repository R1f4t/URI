#include <stdio.h>

int main()
{
    long long int n;
    while (scanf("%lld",&n)!=EOF){
        if(n%100==0){
            printf("%lld\n",n/100);
        }
        else{
            n=(n/100)+1;
            //n+=1;
            printf("%lld\n",n);
        }
    };


    return 0;
}
