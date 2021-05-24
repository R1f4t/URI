#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,amnt,tot=0;
    int c=0,r=0,s=0;
    char ch[2];
    for(i=0;i<n;i++){
        scanf("%d",&amnt);
        scanf("%s",&ch);
        tot+=amnt;
        if(ch[0]=='C'){
            c+=amnt;
        }
        else if(ch[0]=='R'){
            r+=amnt;
        }
        else{
            s+=amnt;
        }
    }
    printf("Total: %d cobaias\n",tot);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    double cd,rd,sd;
    cd=(c*100.0)/tot;
    rd=(r*100.0)/tot;
    sd=(s*100.0)/tot;
    printf("Percentual de coelhos: %.2lf %%\n",cd);
    printf("Percentual de ratos: %.2lf %%\n",rd);
    printf("Percentual de sapos: %.2lf %%\n",sd);

    return 0;
}
