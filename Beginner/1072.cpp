#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,in=0,ot=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=10 && x<=20){
            in++;
        }
        else{
            ot++;
        }
    }
    cout<<in<<" in"<<endl<<ot<<" out"<<endl;

    return 0;
}
