#include <stdio.h>

int main()
{
    int x,y;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==y){
            break;
        }
        else{
            puts(x > y ? "Decrescente" : "Crescente");
        }
    }


    return 0;
}
