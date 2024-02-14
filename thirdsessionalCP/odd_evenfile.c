#include<stdio.h>
int main()
{
    FILE *ptr1;
    ptr1=fopen("abc.txt","w");
    int p;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&p);
        putw(p,ptr1);
    }
    fclose(ptr1);
    FILE *ptr2;
    FILE *ptr3;
    ptr2=fopen("even.txt","w");
    ptr3=fopen("odd.txt","w");
    ptr1=fopen("abc.txt","r");
    int x;
    while((x=getw(ptr1))!=EOF)
    {
        if(x%2==0)
        {
            putw(x,ptr2);
        }
        else
        {
            putw(x,ptr3);
        }
    }
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr1);
    ptr2=fopen("even.txt","r");
    ptr3=fopen("odd.txt","r");
    int f;
    while((f=getw(ptr2))!=EOF)
    {
        printf("%d\t",f);
    }
    fclose(ptr2);
    int y;
    while((y=getw(ptr3))!=EOF)
    {
        printf("%d\t",y);
    }
    fclose(ptr3);
    return 0;
}