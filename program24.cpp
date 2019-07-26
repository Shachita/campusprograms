#include<stdio.h>
void insertion_sort(int [] , int);
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
}
void insertion_sort(int a[], int n)
{
    int i,value,hole;
    for(i=1;i<=n-1;i++)
    {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=value;
    }
    printf("sorted array is");
    for(int j=0;j<n;j++)
   {
       printf("%d\t",a[j]); 
   }
}
