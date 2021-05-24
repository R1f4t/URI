#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1,h2,m1,m2,dh,dm;

    cin>>h1>>m1>>h2>>m2;
    dh=h2-h1;

    if(dh<0){
        dh=24+(h2-h1);
    }

    dm=m2-m1;
    if(dm<0){
        dm=60+(m2-m1);
        dh--;
    }
    if(h1==h2 && m1==m2){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else{
        cout<<"O JOGO DUROU "<<dh<<" HORA(S) E "<<dm<<" MINUTO(S)"<<endl;
    }

    return 0;
}
