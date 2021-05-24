#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,i;
    while(1){
        cin>>num;
        if(num==0){
            break;
        }
        else{
            for(i=1;i<=num;i++){
                if(i==num){
                    cout<<i<<endl;
                }
                else{
                    cout<<i<<" ";
                }
            }
        }
    }


    return 0;
}
