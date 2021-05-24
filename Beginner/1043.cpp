#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,param=0.0,area=0.0;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        param=a+b+c;
        printf("Perimetro = %.1lf\n",param);
    }
    else{
        area=((a+b)/2)*c;
        cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
    }

    return 0;
}
