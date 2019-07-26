#include<stdio.h>
#include<cstdlib>
int main()
{
    FILE *fp,*fq;
    char ch;
    fp=fopen("abc.txt","r");
    fq=fopen("xyz.txt","w");
    if(fp==NULL)
    {
        printf("file is empty");
        exit(0);
    }
    else
    {while(!feof(fp))
    {
        ch=fgetc(fp);
        fputc(ch,fq);
    }
    }
    fclose(fp);
    fclose(fq);

}