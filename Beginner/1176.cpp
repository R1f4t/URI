#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int i,j;
    int num;
    long long int first=0,second=1;
    long long int fibo[62];
    for(i=0;i<62;i++){
        fibo[i]=first;
        first=second;
        second=first+fibo[i];
    }
    cin>>t;
    for(i=0;i<t;i++){
        cin>>num;
        for(j=0;j<62;j++){
            if(num==j){
                cout<<"Fib("<<j<<") = "<<fibo[j]<<endl;
            }
        }
    }

    return 0;
}
