#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m>=60)
    printf("FIRST");
    if(m>=50 && m<60)
    printf("SECOND");
    if(m>=40 && m<50)
    printf("THIRD");
    else if(m<40)
    {
        printf("FAILED");
    }
    
}