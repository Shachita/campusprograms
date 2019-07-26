#include<stdio.h>
int gcd(int , int);
int main()
{
    int a,b;
    printf("enter two nos.");
    scanf("%d%d", &a, &b);
    int s=gcd(a,b);
    printf("GCD of %d and %d is %d", a, b, s);
}

int gcd(int a, int b)
{
    while(a!=b)
    {
       if(a>b)
       {
           return gcd(a-b,b);
       } 
       else
       {
           return gcd(a,b-a);
       }
    }
    return a;
       
    }
