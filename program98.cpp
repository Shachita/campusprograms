#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    char a[100];
    scanf("%d",&n);
    int r,s=0,i=0;
    while(n>0)
    {
        r=n%10;
        s=s+(r*pow(8,i));
        i++;
        n=n/10;
    }
    printf("%d\n",s);
    int r1,j=0;
    while(s!=0)
    {
        r=s%16;
        if(r<10)
        a[i]=r+48;
        else
        a[i]=r+55;
        i++;
        s=s/16;
        
    }
    for(int k=i-1;k>=0;k--)
    {
        printf("%c",a[k]);
    }


}