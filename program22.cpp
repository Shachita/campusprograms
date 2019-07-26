#include<stdio.h>
int main()
{
    int arr[100],n,i,j;
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}