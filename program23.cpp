#include<stdio.h>
int main()
{
    int arr[100],n,i,j,x;
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   int i_min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i_min])
             {
                 i_min=j;
             }
        }
        int temp=arr[i];
        arr[i]=arr[i_min];
        arr[i_min]=temp;
    }
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}