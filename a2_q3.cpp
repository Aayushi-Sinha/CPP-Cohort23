#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n:";
    cin>>n;
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=n;j++)
            if (j>=i)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<"\n";
    }
}
