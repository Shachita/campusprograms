#include<stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    int i=0;
    while(n>0)
    {
        a[i]=n%10;
        i++;
        n=n/10;
    }
    printf("%d",i);
    for(j=i-1;j>=0;j--)
    {   int r=a[j];
        switch(r)
        {
            case 0: printf("ZERO\t");
                    break;
            case 1: printf("ONE\t");
                    break;
            case 2: printf("TWO\t");
                    break;
            case 3: printf("THREE\t");
                    break;
            case 4: printf("FOUR\t");
                    break;
            case 5: printf("FIVE\t");
                    break;
            case 6: printf("SIX\t");
                    break;
            case 7: printf("SEVEN\t");
                    break;
            case 8: printf("EIGHT\t");
                    break;
            case 9: printf("NINE\t");
                    break;
            
        }
    }
}