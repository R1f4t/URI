#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6],even=0;

    for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
    }
    cout<<even<<" valores pares"<<endl;

    return 0;
}
