#include<iostream>
using namespace std;
int main()
{
    string s, d;
    int i=0;
    int count=0;
    cout<<"enter the string";
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        count=count+1;
    }
    int l=0, h=count-1, flag=1;
    while(l<=count/2)
    {
        if(s[l]==s[h])
        {

        }
        else
        {   flag=0;
            cout<<"Not a palindrome";
            break;
        }
        l++;
        h--;
        
    }
    if(flag==1)
    {
        cout<<"palindrome";
    }
}
