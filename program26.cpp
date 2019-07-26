#include<stdio.h>
int main()
{
    int max,min,n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("the max is %d and the min is %d", max,min);
}