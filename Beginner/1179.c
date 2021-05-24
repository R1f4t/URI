#include <stdio.h>

int main()
{
    int arr[15];
    int par[15],impar[15];
    int i,l;
    for(i=0;i<15;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,k=0;
    for(i=0;i<15;i++){
        if(arr[i]%2==0){
            par[j]=arr[i];
            j++;
        }
        else{
            impar[k]=arr[i];
            k++;
        }
        if(j>4){
            for(l=0;l<5;l++){
                printf("par[%d] = %d\n",l,par[l]);
            }
            j=0;
        }
        if(k>4){
            for(l=0;l<5;l++){
                printf("impar[%d] = %d\n",l,impar[l]);
            }
            k=0;
        }
    }
    for(i=0;i<k;i++){
        printf("impar[%d] = %d\n",i,impar[i]);
    }
    for(i=0;i<j;i++){
        printf("par[%d] = %d\n",i,par[i]);
    }


    return 0;
}
