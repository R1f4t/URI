#include <stdio.h>

int main()
{
    int i,j,a=7,b=5;
    for(i=1;i<=9;i+=2){
        for(j=a;j>=b;j--){
            printf("I=%d J=%d\n",i,j);
        }
        a+=2;
        b+=2;
    }

    return 0;
}
