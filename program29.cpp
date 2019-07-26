#include<stdio.h>
#include<string.h>
int main()
{
    char p[100];
    int i;
    printf("enter the string");
    gets(p);
    int len=strlen(p);
    for(i=0;i<len;i++)
    {
        if(p[i]>=65 && p[i]<=90)
            p[i]=p[i]+32;
        else if(p[i]>=97 && p[i]<=122)
            p[i]=p[i]-32;
    }
    printf("the string is");
    for( i=0;i<len;i++)
    {
        printf("%c",p[i]);
    }


}