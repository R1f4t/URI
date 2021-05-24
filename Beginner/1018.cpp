#include <iostream>

using namespace std;

int main()
{
    int tk;
    cin>>tk;

    cout<<tk<<endl;
    cout<<tk/100<<" nota(s) de R$ 100,00"<<endl;
    tk=tk%100;
    cout<<tk/50<<" nota(s) de R$ 50,00"<<endl;
    tk=tk%50;
    cout<<tk/20<<" nota(s) de R$ 20,00"<<endl;
    tk=tk%20;
    cout<<tk/10<<" nota(s) de R$ 10,00"<<endl;
    tk=tk%10;
    cout<<tk/5<<" nota(s) de R$ 5,00"<<endl;
    tk=tk%5;
    cout<<tk/2<<" nota(s) de R$ 2,00"<<endl;
    tk=tk%2;
    cout<<tk/1<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
