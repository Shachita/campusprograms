#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a no.";
    cin>>a;
    int r,d=0;
    while(a>0)
    {
        r=a%10;
        d=d*10+r;
        a=a/10;
    }
    cout<<"reverse of the no. is"<<d; 
}