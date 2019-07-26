#include<stdio.h>
int main()
{
    int n,i, s=0;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s==n)
    printf("perfect no.");
    else
    printf("not a perfect no.");
}