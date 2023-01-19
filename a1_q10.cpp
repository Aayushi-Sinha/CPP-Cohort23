#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number:";
    cin>>n;
    while (n%2==0)
    {
        cout<<"2\t";
        n/=2;
    }
    for (i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            cout<<i<<"\t";
            n/=i;
        }
    }
    if (n>2)
        cout<<n;
    return 0;
}
