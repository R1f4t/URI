#include <stdio.h>

int main()
{
    int i,v,x[11];
    scanf("%d",&v);
    for(i=0;i<10;i++){
        x[i]= i>0 ? x[i-1]*2 : v;
        printf("N[%d] = %d\n",i,x[i]);
    }

    return 0;
}
