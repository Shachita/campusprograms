#include<stdio.h>
int fact(int);
int main()
{
    int n,r,i, s=0;
    printf("enter the no");
    scanf("%d",&n);
    int n1=n;
    while(n!=0)
    {
        r=n%10;
        s+=fact(r);
        n=n/10;
    }

    if(n1==s)
    {
        printf("strong no.");
    }
    else
    {
        printf("not a strong no.");
    }
}
int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}