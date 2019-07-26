#include<iostream>
using namespace std;
int main()
{
    int  n,flag=1;
    cout<<"enter the no.";
    cin>>n;
    if(n==1 || n==0)
    {
        cout<<"factorial is\n"<<"1";
    }
    else
    {
    while (n>0)
    {
        flag=flag*n;
        n=n-1;
    }
    cout<<"factorial is\n"<<flag;
    }
}