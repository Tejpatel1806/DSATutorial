#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("abc.txt","w");
    char c;
    while((c=getchar())!=EOF)
    {
        putc(c,ptr);
    }
    fclose(ptr);
    ptr=fopen("abc.txt","r");
    while((c=getc(ptr))!=EOF)
    {
        printf("%c\t",c);
    }
    return 0;
}