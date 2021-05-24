#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[101];
    int i,maxz=arr[0];
    int pos;

    for(i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]>maxz){
            maxz=arr[i];
            pos=i+1;
        }
    }

    cout<<maxz<<endl<<pos<<endl;

    return 0;
}
