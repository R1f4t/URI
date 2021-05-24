#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a[7],sum=0.0;
    int total=0;
    for(int i=0; i<6;i++){
        cin>>a[i];
        if(a[i]>0){
            total++;
            sum+=a[i];
        }
    }
    cout<<total<<" valores positivos"<<endl;
    double res=sum/total;
    printf("%.1lf\n",res);


    return 0;
}
