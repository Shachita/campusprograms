#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    int f=fact(n);
    cout<<"factorial is \t"<<f;
}
int fact(int n)
    {
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    }
