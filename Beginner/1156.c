/*#include <stdio.h>

int main()
{
    double s=0;
    double i,o,e=1;
    for(i=1;i<=39;i+=2){
        o=i/e;
        s+=o;
        e*=2;
    }
    printf("%.2lf\n",s);

    return 0;
}*/
#include <stdio.h>
int main()
{
    double a,b=1,c, S=0;
    for(a=1; a<=39; a+=2)
    {
        c=a/b;
        S+=c;
        b*=2;
    }
    printf("%.2lf\n",S);
    return 0;
}
