#include<stdio.h>
int print(int);
int main()
{
    int i=1;
    print(i);
}
int print(int num)
{
    if(num<=100)
    {
        printf("%d\t",num);
        print(num+1);
    }
}