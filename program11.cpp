#include<stdio.h>
void swap(int*, int*);
int main()
{   int a, b;
    printf("enter 2 nos. to swap");
    scanf("%d%d", &a, &b);
    printf("before swaping value of a is %d and value of b is %d\n", a, b);
    swap(&a,&b);
    printf("after swaping value of a is %d and value of b is %d\n", a ,b);
    
}
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("values of a and b are %d %d\n", *a, *b); 

}