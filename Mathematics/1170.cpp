#include <iostream>

using namespace std;

void days(float n)
{
    int count=0;
    while(n>1){
        count++;
        n=n/2;
    }
    cout<<count<<" dias"<<endl;

}

int main()
{
    int t;
    float n;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>n;
        days(n);
    }

    return 0;
}
