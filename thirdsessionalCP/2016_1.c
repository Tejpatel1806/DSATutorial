#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    p=(int *)realloc(p,10);
    for(int h=5;h<10;h++)
    {
        scanf("%d",(p+h));
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}