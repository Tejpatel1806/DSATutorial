#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("xzd.txt","w");
    int u;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&u);
        fprintf(ptr,"%d",u);
    }
    fclose(ptr);
    int max=0,min=0;
    ptr=fopen("xzd.txt","r");
    int p;
    for(int i=0;i<10;i++)
    {
       fscanf(ptr,"%d",&p);
       if(max<p)
       {
           max=p;
       }
       if(min>p)
       {
           min=p;
       }
    }
    fclose(ptr);
    printf("%d %d",max,min);
    ptr=fopen("xzd.txt","a");
    fprintf(ptr,"%d",max);
    fprintf(ptr,"%d",min);
    fclose(ptr);
    return 0;
}