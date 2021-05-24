#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,k,x,y;
    char ch[1001];
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int i,e;
    x=x*x;
    y=y*y;
    e=sqrt(x+y);
    for(i=0;i<n;i++){
        scanf("%s",&ch[i]);
    }
    printf("\nN=%d,K=%d\n",n,k);
    if(e>k){
        printf("Trap 1\n");
    }

    else{
        for(i=1;i<=n;i++){
            e++;
            if(e<k && i==n){
                printf("Sucesso\n");
                printf("\n\tE=%d\n",e);
            }
            else{
                printf("Trap %d,E=%d,K=%d,N=%d\n",i,e,k,n);
                break;
            }
                /*else{
                    e++;
                    printf("\n\tE=%d\n",e);
                }*/
        }
    }



    return 0;
}
