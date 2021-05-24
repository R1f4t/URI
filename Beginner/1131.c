#include <stdio.h>

int main()
{
    int a,b;
    int c,count=0;
    int flag=0,inter=0,grem=0,emp=0;
    while(1){
        if(flag==0){
            scanf("%d %d",&a,&b);
            flag=1;
            count++;
            if(a>b){
                inter++;
            }
            else if(a<b){
                grem++;
            }
            else{
                emp++;
            }
        }
        else{
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&c);
            if(c==2){
                break;
            }
            else if(c==1){
                flag=0;
            }
            else{
                continue;
            }
        }
    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",grem);
    printf("Empates:%d\n",emp);
    if(inter==grem){
        printf("Não houve vencedor\n");
    }
    else{
        puts(inter>grem? "Inter venceu mais":"Gremio venceu mais");
    }

    return 0;
}
