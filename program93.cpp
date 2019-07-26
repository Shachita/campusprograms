#include<stdio.h>
int main()
{
    int row, i,j,no=1;
    printf("enter the rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", no);
            no++;
        }
        
        printf("\n");
    }
}