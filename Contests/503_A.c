#include <stdio.h>

int main()
{
    int h,m;
    while(scanf("%d %d",&h,&m)!=EOF){
        if(h==0 && m==0){
            printf("00:00\n");
        }
        else{
            printf("%02d:%02d\n",h/30,m/6);
        }
    }


    return 0;
}
