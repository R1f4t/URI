#include <stdio.h>

int main()
{
    int n[21];
    int i;
    int l=19;
    int a[21];
    for(i=0;i<20;i++){
        scanf("%d",&n[i]);
        a[l]=n[i];
        l--;
    }
    for(i=0;i<20;i++){
        printf("N[%i] = %d\n",i,a[i]);
    }

    return 0;
}
