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
    int j,k,count=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(a[j]==a[i])
            {
                for(k=j;k<=n-1;k++)
                {
                   a[k]=a[k+1];
                
                }
            n--;
            }
            else
            j++;
        }
    }

    printf("after deletion\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }




}
