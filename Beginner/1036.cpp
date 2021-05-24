#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,R1,R2,res_up;

    cin>>a>>b>>c;

    res_up=(b*b)-(4*a*c);

    if(a>0 && res_up>=0)
    {
        R1= ((-b)+(sqrt(res_up)))/(2*a);
        R2= ((-b)-(sqrt(res_up)))/(2*a);

        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }

    return 0;
}
