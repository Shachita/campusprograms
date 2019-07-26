#include<stdio.h>
int fib(int n);
int main()
{
    int n,c,s=0;
    printf("enter the no. of terms in the series");
    scanf("%d",&n);
    for(c=1; c<=n; c++)
    {   
        printf("%d\t",fib(c-1));
    }
    return 0;

}
int fib(int n)
{
    if(n==0 || n==1) 
        return n;
    else 
    return fib(n-1)+fib(n-2);
}