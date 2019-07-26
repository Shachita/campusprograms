#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 nos.");
    scanf("%d%d", &a,&b);
    int c=a-(-b);
    printf("sum is %d",c);
}