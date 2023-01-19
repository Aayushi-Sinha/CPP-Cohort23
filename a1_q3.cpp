#include<iostream>
using namespace std;
int main()
{
    int t,n,flag;
    cout<<"Enter number of times you want to run the test:";
    cin>>t;
    int i;
    for(i=1;i<=t;i++)
    {
        cout<<"Enter number:";
        cin>>n;
        int j;
        flag=0;
        if (n==1||n==0)
            flag=1;
        else
        {
            for(j=2;j<=n/2;j++)
            {
                if (n%j==0)
                {
                    flag=1;
                    break;
                }
             }
        }
        if (flag==1)
            cout<<n<<" is not a prime number\n";
        else
            cout<<n<<" is a prime number\n";
        
    }
    return 0;
}
