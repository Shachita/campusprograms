#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the no.");
    scanf("%d",&n);
    int i,flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is prime" , n);       
    }
    else
    {
        printf("%d is not prime", n);
    }
    
    
}