#include<stdio.h>
void mergesort(int [], int ,int);
void merge(int[], int ,int ,int ,int);
int main()
{
    int n;
    scanf("%d",&n);
    int i, a[n];
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
void mergesort(int a[], int l, int h)
{   
    int mid;
    if(l<h)
    {   
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,mid+1,h);

    }
}
void merge(int a[], int l1, int h1, int l2, int h2 )
{
    int i=l1,j=l2,k=0;
    int temp[50],s;
    while(i<h1 && j<h2)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }
        k++;
    }

    while(i<h1)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while (j<h2)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    for(i=l1,j=0;i<=h2;i++,j++)
    {
        a[i]=temp[j];
    }
}