#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("llk.txt","w");
    int t,sum=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&t);
        sum=sum+t;
        fprintf(ptr,"%d ",t);
    }
    fprintf(ptr,"%d ",sum);
    return 0;
}