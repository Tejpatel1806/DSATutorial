#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("memory cannot be allocated\n");
    }
    else
    {
      for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    }
}