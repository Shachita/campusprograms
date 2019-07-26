#include<stdio.h>
int main()
{
    int arr[100],n,i,l;
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
    l=0;
    int last=n-1;
    int index;
    int m=(l+last)/2;
    while(l<=last)
    {
        
        if(arr[m]==s)
        {
            printf("Element %d found at %d", s, m+1);
            break;
        }
        else if(arr[m]>s)
        last=m-1;
        else if(arr[m]<s)
        l=m+1;
        m=(l+last)/2;
    }
    if(l>=n)
    {
        printf("not found");
    }
}  
