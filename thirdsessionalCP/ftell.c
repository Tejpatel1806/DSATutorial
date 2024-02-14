#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("xyz.txt","w");
    char a[25]="this is hgyr";
    fprintf(ptr,"%s",a);
    fclose(ptr);
    ptr=fopen("xyz.txt","r");
    int n=ftell(ptr);
    printf("%d ",n);
    rewind(ptr);
    n=ftell(ptr);
    printf("%d ",n);
    fseek(ptr,-2,2);
    n=ftell(ptr);
    printf("%d",n);
    char c=getc(ptr);
    printf("%c",c);
    return 0;
    }