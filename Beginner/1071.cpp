#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,sum=0;

    cin>>x>>y;
    if(x<y){
        for(int i=x+1;i<y;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
    }
    else{
        for(int i=y+1;i<x;i++){
            if(i%2!=0){
                sum+=i;
            }
        }
    }



    cout<<sum<<endl;

    return 0;
}
