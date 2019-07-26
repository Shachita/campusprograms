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
}
int search(int arr[], int l, int n,int s)
{
    if(l>n-1)
    return -1;
    if(arr[l]==s)
    return l;
    if(arr[n-1]==s)
    return n-1;
    search(arr,l+1,n,s);
}
