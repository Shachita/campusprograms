#include<stdio.h>
int search(int [], int ,int,int);
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
    int index=search(arr, 0,n,s);
    if(index!=-1)
    printf("element %d found at %d", s, index+1);
    else
    printf("not found");
    return 0;
}
int search(int arr[], int l, int n,int s)
{   
    int m=(l+(n-1))/2;
    if(l>n-1)
    return -1;
    if(arr[m]==s)
    return m;
    else if(arr[m]>s)
    return search(arr,l,m-1,s);
    else if(arr[m]<s)
    return search(arr,m+1,n,s);
    
}
