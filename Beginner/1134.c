#include <stdio.h>

int main()
{
    int c;
    int al=0,gas=0,dis=0;
    while(1){
        scanf("%d",&c);
        if(c==4){
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",al);
            printf("Gasolina: %d\n",gas);
            printf("Diesel: %d\n",dis);
            break;
        }
        else if(c==1){
            al++;
        }
        else if(c==2){
            gas++;
        }
        else if(c==3){
            dis++;
        }
        else{
            continue;
        }
    }


    return 0;
}
