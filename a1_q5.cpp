#include<iostream>
using namespace std;
int main()
{
    int n,count=0,n1;
    cout<<"Enter number:";
    cin>>n;
    n1=n;
    while(n!=0)
    {
        count++;
        n=n/10;        
    }
    cout<<"Number of digits in "<<n1<<" is "<<count;
    return 0;
}
