#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5, avg;

    cin>>num1>>num2>>num3>>num4;

    avg=((num1*2)+(num2*3)+(num3*4)+(num4*1))/(2+3+4+1);
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl;

    if(avg>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>num5;
        cout<<"Nota do exame: "<<num5<<endl;
        avg=(num5+avg)/2;
        if(avg>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<fixed<<setprecision(1)<<avg<<endl;
    }

    else
    {
        cout<<"Aluno reprovado."<<endl;
    }


    return 0;
}
