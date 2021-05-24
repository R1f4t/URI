#include <bits/stdc++.h>

using namespace std;

int main()
{
    int st,et,du;
    cin>>st>>et;
    du=et-st;
    if(du<0){
        du=24+(et-st);
    }

    if(st==et){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;

    }
    else{
        cout<<"O JOGO DUROU "<<du<<" HORA(S)"<<endl;

    }

    return 0;
}
