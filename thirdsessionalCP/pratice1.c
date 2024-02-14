#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    ptr1=fopen("abc.txt","r");
    ptr2=fopen("mnb.txt","w");
    char c;
    while((c=getc(ptr1))!=EOF)
    {
       putc(c,ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
    ptr2=fopen("mnb.txt","r");
    while((c=getc(ptr2))!=EOF)
    {
        printf("%c ",c);
    }
    return 0;
}