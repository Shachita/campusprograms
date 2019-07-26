#include<stdio.h>
long pow(int ,int);
int main()
{
    int a,b;
    printf("enter the 2 nos.");
    scanf("%d%d", &a, &b);
    printf("a to the power b is %d", pow(a,b));
    return 0;

}
long pow(int a , int b)
{
    
    if(b)
    {
        return a*pow(a,(b-1)); 
    }
    return 1;

}