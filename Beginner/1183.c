#include <stdio.h>

int main()
{
    double tot=0.0, M[12][12];
    char s[2];

    scanf("%s",&s);

    int i,j,c=1;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0;i<12;i++){
        for(j=c;j<12;j++){
            tot+=M[i][j];
        }
        c++;
    }
    if(s[0]=='S'){
        printf("%.1lf\n",tot);
    }
    else if(s[0]=='M'){
        tot=tot/66.0;
        printf("%.1lf\n",tot);
    }


    return 0;
}
