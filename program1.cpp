#include <iostream>

using namespace std;

int main()
{  string s;
   int count =0;
   cout<<"enter a string"<<endl;
   cin>>s;
   for(int i=0; s[i]!='\0'; i++)
   {
       count=count+1;
   }
   while(count>=0)
   {
       cout<<s[count];
       count=count-1;
   }
   
   return 0;
}