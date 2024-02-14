#include<stdio.h>
int main(int argv,char *argc[])
{
    FILE *ptr1,*ptr2,*ptr;
    ptr1=fopen(argc[1],"w");
    ptr2=fopen(argc[2],"w");
    int y,k;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&y);
        putw(y,ptr1);
    }
    fclose(ptr1);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&k);
        putw(k,ptr2);
    }
    fclose(ptr2);
    ptr1=fopen(argc[1],"r");
    ptr2=fopen(argc[2],"r");
    ptr=fopen("DATA.txt","w");
    int s;
    while((s=getw(ptr1))!=EOF)
    {
        putw(s,ptr);
    }
    fclose(ptr1);
    while((s=getw(ptr2))!=EOF)
    {
        putw(s,ptr);
    }
    fclose(ptr2);
    fclose(ptr);
    ptr=fopen("DATA","r");
    while((s=getw(ptr))!=EOF)
    {
        printf("%d ",s);
    }
    return 0;
}