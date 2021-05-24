#include <bits/stdc++.h>

using namespace std;

long long int factorial(long long int x)
{
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}


int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        long long int res1=factorial(a);
        long long int res2=factorial(b);
        cout<<res1+res2<<endl;
    }


    return 0;
}
