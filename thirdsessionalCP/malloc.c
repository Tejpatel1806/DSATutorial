#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}