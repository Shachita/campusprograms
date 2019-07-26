#include<iostream>
using namespace std;
int main()
{   int n, s=0, y=1;
    printf("enter the value of n");
    scanf("%d", &n);
    while(n>0)
    {
        int r=s+y;
        printf("%d\t",s) ;
        s=y;
        y=r;
        n--;
    }

}