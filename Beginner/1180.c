#include <stdio.h>

int main()
{
    int n;
    int a[1001];
    scanf("%d",&n);
    int i;
    int min=a[0];
    int pos;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<min){
            min=a[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,pos);

    return 0;
}
