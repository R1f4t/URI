#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i<=n+11;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
        else
            continue;
    }

    return 0;
}
