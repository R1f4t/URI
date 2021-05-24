#include <bits/stdc++.h>

using namespace std;

int main()
{
    int code_1,code_2;
    double price_1,unit_1,pay_1,price_2,unit_2,pay_2,pay;

    cin>>code_1;
    cin>>unit_1>>price_1;

    cin>>code_2;
    cin>>unit_2>>price_2;

    pay_1= unit_1*price_1;
    pay_2= unit_2*price_2;

    pay= pay_1+pay_2;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<pay<<endl;

    return 0;
}



