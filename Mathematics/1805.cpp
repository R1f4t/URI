#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;

    return 0;
}
