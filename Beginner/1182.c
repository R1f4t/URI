#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int n,x,y;
    scanf("%d", &n);
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
            scanf("%lf", &M[x][y]);
            if(y==n){
                a+=M[x][y];
            }
        }
    }
    if(T[0]=='S'){
        printf("%.1lf\n",a);
    }

    else if(T[0]=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }

    return 0;
}

