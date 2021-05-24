#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int y;
    while((cin>>y)){
        if(y%4==0){
            if(y%100==0){
                if(y%400==0){
                    cout<<"This is a leap year."<<endl;
                    if(y%15==0){
                        cout<<"This is huluculu festival year."<<endl;
                    }
                    else if(y%55==0){
                        cout<<"This is buluculu festival year."<<endl;
                    }

                }
                else{
                    if(y%15==0){
                        cout<<"This is huluculu festival year."<<endl;
                    }
                    else{
                        cout<<"This is an ordinary year."<<endl;
                    }
                }
            }
            else{
                cout<<"This is leap year."<<endl;
                if(y%15==0){
                    cout<<"This is huluculu festival year."<<endl;
                }
                else if(y%55==0){
                    cout<<"This is buluculu festival year."<<endl;
                }

            }
        }
        else{
            if(y%15==0){
                cout<<"This is huluculu festival year."<<endl;
            }
            else{
                cout<<"This is an ordinary year."<<endl;
            }

        }
        cout<<endl<<endl;
    }

    return 0;
}
