#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("abc.txt","a");
    char c;
    while((c=getchar())!=EOF)
    {
        putc(c,ptr);
    }
    fclose(ptr);
    ptr=fopen("abc.txt","r");
    while((c=getc(ptr))!=EOF)
    {
        printf("%c ",c);
    }
    return 0;
}