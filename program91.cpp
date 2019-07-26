#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2;
    printf("enter the coefficients");
    scanf("%d%d%d",&a,&b,&c);
    x1=(-b+pow((b*b)-(4*a*c),0.5))/(2*a); 
    x2=(-b-pow((b*b)-(4*a*c),0.5))/(2*a);
    printf("the roots are %d %d", x1,x2);
}