#include <iostream>

using namespace std;

int main()
{
    long long int a,b;
    while(cin>>a>>b){
        if(a-b<0){
            cout<<(a-b)*(-1)<<endl;
        }
        else{
            cout<<a-b<<endl;
        }
    }

    return 0;
}
