#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,hour;
    double pay,salary;

    cin>>num>>hour>>pay;

    salary= hour*pay;

    cout<<"NUMBER = "<<num<<endl<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;

    return 0;
}

