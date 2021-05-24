#include <iostream>

using namespace std;

int main()
{
    double TK;
    int tk,poisha;
    cin>>TK;

    tk=TK;
    poisha=TK*100;

    cout<<"NOTAS:"<<endl;
    cout<<tk/100<<" nota(s) de R$ 100.00"<<endl;
    tk=tk%100;
    cout<<tk/50<<" nota(s) de R$ 50.00"<<endl;
    tk=tk%50;
    cout<<tk/20<<" nota(s) de R$ 20.00"<<endl;
    tk=tk%20;
    cout<<tk/10<<" nota(s) de R$ 10.00"<<endl;
    tk=tk%10;
    cout<<tk/5<<" nota(s) de R$ 5.00"<<endl;
    tk=tk%5;
    cout<<tk/2<<" nota(s) de R$ 2.00"<<endl;
    tk=tk%2;

    cout<<"MOEDAS:"<<endl;
    cout<<tk<<" moeda(s) de R$ 1.00"<<endl;
    poisha=poisha%100;
    cout<<poisha/50<<" moeda(s) de R$ 0.50"<<endl;
    poisha=poisha%50;
    cout<<poisha/25<<" moeda(s) de R$ 0.25"<<endl;
    poisha=poisha%25;
    cout<<poisha/10<<" moeda(s) de R$ 0.10"<<endl;
    poisha=poisha%10;
    cout<<poisha/5<<" moeda(s) de R$ 0.05"<<endl;
    poisha=poisha%5;
    cout<<poisha<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
