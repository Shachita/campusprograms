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
    int index,flag=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==s)
        {flag=1;
        index=j;
        }
    }
    if(flag=1)
    printf("element %d fount at %d",s,index+1);
    else
    printf("not found");
}