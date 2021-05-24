#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sal;
    cin>>sal;
    if(sal>=0 && sal<=400.00){
        double s=sal;
        sal=sal+(sal*0.15);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sal-s<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(sal>=400.01 && sal<=800.00){
        double s=sal;
        sal=sal+(sal*0.12);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sal-s<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(sal>=800.01 && sal<=1200.00){
        double s=sal;
        sal=sal+(sal*0.1);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sal-s<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(sal>=1200.01 && sal<=2000.00){
        double s=sal;
        sal=sal+(sal*0.07);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sal-s<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else{
        double s=sal;
        sal=sal+(sal*0.04);
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sal-s<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
