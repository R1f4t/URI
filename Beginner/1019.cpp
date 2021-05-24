#include <iostream>

using namespace std;

int main()
{
    int in,hr,mi,sec;

    cin>>in;
    hr=in/3600;
    in=in%3600;
    mi=in/60;
    in=in%60;
    sec=in;

    cout<<hr<<":"<<mi<<":"<<sec<<endl;

    return 0;
}
