#include <stdio.h>

int main()
{
    int n;
    double x,y,z,avg=0.0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf",&x,&y,&z);
        avg=((x*2)+(y*3)+(z*5))/10;
        printf("%.1lf\n",avg);
    }

    return 0;
}
