#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        int flag=1;
        for(int j=2;j<=sqrt(x);j++){
            if(x%j==0){
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
    }

    return 0;
}
