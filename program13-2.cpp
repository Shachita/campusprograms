#include<stdio.h>
int main()
{
    int row,space,j,i,no=1;
    printf("enter no. of rows");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(space=row-i; space>=1; space--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d  ", no);
            no++;
        }
    printf("\n");
    }
return 0;

}
