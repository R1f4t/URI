#include <iostream>

using namespace std;

int main()
{
    int i, stack_no, num1, num2, temp, up,low;

    cin>>stack_no;

    for(i=0;i<stack_no;i++)
    {
        cin>>num1>>num2;

        if(num1>num2)
        {
            up=num1;
            low=num2;
        }
        else
        {
            up=num2;
            low=num1;
        }
        while(up%low !=0)
        {
            temp=up%low;
            up=low;
            low=temp;
        }
        cout<<low<<endl;
    }

    return 0;
}
