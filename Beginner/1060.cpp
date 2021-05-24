#include <iostream>

using namespace std;

int main()
{
    double a[7];
    int count=0;
    for(int i=0;i<6;i++){
        cin>>a[i];
        if(a[i]>0){
            count++;
        }
        else
            continue;
    }
    cout<<count<<" valores positivos"<<endl;

    return 0;
}
