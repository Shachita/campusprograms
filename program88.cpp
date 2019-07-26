#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("enter the array");
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("the max is %d and the min is %d",max,min);
}