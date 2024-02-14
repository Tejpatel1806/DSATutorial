#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("xzc.txt","w");
    char c;
    while((c=getchar())!=EOF)
    {
         putc(c,ptr);
    }
    fclose(ptr);
    ptr=fopen("xzc.txt","r");
    int count=0,count1=0;
    while((c=getc(ptr))!=EOF)
    {
        if(c==97 || c==101|| c==105 || c==111 || c==117)
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    fclose(ptr);
    ptr=fopen("xzc.txt","a");
        putw(count,ptr);
        putw(count1,ptr);
     fclose(ptr);
}