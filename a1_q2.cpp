#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter marks:";
    cin>>num;
    if (num>90)
        cout<<"Excellent";
    else if (num>80 && num<=90)
        cout<<"Good";
    else if (num>70 && num<=80)
        cout<<"Fair";
    else if (num>60 && num<=70)
        cout<<"Meets Expectations";
    else
        cout<<"Below par";
    return 0;
}
