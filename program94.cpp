/*
 * C Program to Display its own Source Code as its Output
 */
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen(__FILE__,"r");
    do{
        ch=getc(fp);
        putchar(ch);

    }while(ch!=EOF);
}