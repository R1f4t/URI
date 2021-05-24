#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n,temp,size;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        temp=0;
        size=str.length();
        for(int j=0;j<size;j++){
            if(str[j]=='8'){
                temp+=7;
            }
            else if(str[j]=='0' || str[j]=='6' || str[j]=='9'){
                temp+=6;
            }
            else if(str[j]=='2' || str[j]=='3' || str[j]=='5'){
                temp+=5;
            }
            else if(str[j]=='4'){
                temp+=4;
            }
            else if(str[j]=='7'){
                temp+=3;
            }
            else{
                temp+=2;
            }
        }
        cout<<temp<<" leds"<<endl;
    }

    return 0;
}
