#include <bits/stdc++.h>

using namespace std;

int main()
{
    char N[128];
    double salary,sold,bonus;

    cin>>N;
    cin>>salary>>sold;

    bonus= salary+(sold*15)/100;

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<bonus<<endl;

    return 0;
}


