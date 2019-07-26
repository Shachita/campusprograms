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
    printf("enter the position");
    scanf("%d",&p);
    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
        
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
}