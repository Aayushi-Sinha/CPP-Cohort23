#include<iostream>
using namespace std;
int main()
{
    int low,high,i,j;
    cout<<"Enter lower limit:";
    cin>>low;
    cout<<"Enter upper limit:";
    cin>>high;
    for (i=low;i<=high;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if (i==j)
            cout<<j<<"\n";             
    }
    return 0;
}
