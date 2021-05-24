#include <iostream>

using namespace std;

int main()
{
    int a[4],f,s,t;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>a[i+1] && a[i]>a[i+2]){
            f=a[i];
            if(a[i+1]>a[i+2]){
                s=a[i+1];
                t=a[i+2];
            }
            else{
                s=a[i+2];
                t=a[i+1];
            }
            cout<<t<<endl<<s<<endl<<f<<endl<<endl;
            break;
        }
        else if(a[i+1]>a[i] && a[i+1]>a[i+2]){
            f=a[i+1];
            if(a[i]>a[i+2]){
                s=a[i];
                t=a[i+2];
            }
            else{
                s=a[i+2];
                t=a[i];
            }
            cout<<t<<endl<<s<<endl<<f<<endl<<endl;
            break;
        }
        else{
            f=a[i+2];
            if(a[i]>a[i+1]){
                s=a[i];
                t=a[i+1];
            }
            else{
                s=a[i+1];
                t=a[i];
            }
            cout<<t<<endl<<s<<endl<<f<<endl<<endl;
            break;
        }

    }

    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
