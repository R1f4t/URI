#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sal,temp, temp2, temp3;
    cin>>sal;
    if(sal>=0.00 && sal<=2000.00){
        cout<<"Isento"<<endl;
    }
    else{
        if(sal>=2000.01 && sal<=3000.00){
            temp=sal-2000.00;
            cout<<"R$ "<<fixed<<setprecision(2)<<temp*.08<<endl;
        }
        else if(sal>=3000.01 && sal<=4500.00){
            temp=sal-2000.00;
            temp2=temp-1000.00;
            temp-=temp2;
            cout<<"R$ "<<fixed<<setprecision(2)<<(temp*.08)+(temp2*.18)<<endl;

        }
        else{
            temp=sal-2000.00;
            temp2=temp-1000.00;
            temp3=temp2-1500.00;
            temp-=temp2;
            temp2-=temp3;
            cout<<"R$ "<<fixed<<setprecision(2)<<(temp*.08)+(temp2*.18)+(temp3*.28)<<endl;
        }
    }

    return 0;
}
