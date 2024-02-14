#include<stdio.h>
int main()
{
    int count=0;
    char m[50];
    char q[50];
    printf("enter the name of the first file:\n");
    scanf("%s",m);
    printf("enter the name of the second file:\n");
    scanf("%s",q);
    char x,y;
    FILE *ptr1,*ptr2;
    ptr1=fopen(m,"r");
    ptr2=fopen(q,"r");
    while(((x=getc(ptr1))!=EOF)&&((y=getc(ptr2))!=EOF))
    {
        if(x!=y)
        {
            printf("1");
            count=1;
            break;
        }
    }
    if(count==0)
    {
    if(((x=getc(ptr1))==EOF)&&((y=getc(ptr2))==EOF))
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    }
    return 0;
}