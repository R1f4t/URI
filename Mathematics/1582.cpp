#include <iostream>

using namespace std;

int main()
{
    long int x,y,z;
    while(cin>>x>>y>>z){
        if(((x*x)+(y*y))==(z*z) || ((x*x)+(z*z))==(y*y) || ((z*z)+(y*y))==(x*x)){
            if( x%2==0 && y%2==0 && z%2==0 ){
                cout<<"tripla pitagorica"<<endl;
            }
            else{
                cout<<"tripla pitagorica primitiva"<<endl;
            }
        }
        else if( x%2==0 && y%2==0 && z%2==0 ){
            cout<<"tripla pitagorica"<<endl;
        }
        else{
            cout<<"tripla"<<endl;
        }
    }

    return 0;
}
