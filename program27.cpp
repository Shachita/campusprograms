#include<stdio.h>
int main()
{
    int max,min,n,m;
    printf("enter the no. of rows");
    scanf("%d",&n);
    printf("enter the no. of coloumns");
    scanf("%d",&m);

    int a[n][m];
    printf("enter the array");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("the max is %d and the min is %d", max,min);
}