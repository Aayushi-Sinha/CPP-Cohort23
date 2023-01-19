#include<iostream>
using namespace std;
int main()
{
    int num1,num2,gcd;
    cout<<"Enter number 1:";
    cin>>num1;
    cout<<"enter number 2:";
    cin>>num2;
    int i;
    if (num1>num2)
        i=num1;
    else
        i=num2;
    while(1)
    {
        if ((i%num1==0)&&(i%num2==0))
            break;
        else
            i++;
    }
    gcd=(num1*num2)/i;
    cout<<"LCM is "<<i<<"\n";
    cout<<"GCD is "<<gcd; 
    return 0;
}
