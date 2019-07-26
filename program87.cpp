#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("enter the array");
    int i,a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,e;
    printf("enter the position and element");
    scanf("%d%d",&p,&e);
    for(i=n-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
        
    }
    a[p-1]=e;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
}