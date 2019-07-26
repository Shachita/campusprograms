#include<stdio.h>
int main()
{
    int n;
    int a[100];
    printf("enter the no");
    scanf("%d",&n);
    int i=0;
    while(n>=8)
    {
        a[i]=n%8;
        i++;
        n=n/8;
    }
    a[i]=n;
    for(int j=i;j>=0;j--)
    {
        printf("%d", a[j]);
    }

}