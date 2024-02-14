#include<stdio.h>
int main()
{
    struct abc
    {
        int code;
        float cost;
        int iteam;
    };
    struct abc a[5],b[5];
    char file[20];
    //printf("ENTER THE FILENAME:\n");
    //scanf("%s",file);
    FILE *ptr;
    ptr=fopen("yuv.txt","w");
    for(int j=0;j<5;j++)
    {
         printf("ENTER THE VALUES:\n");
         scanf("%d %f %d",&a[j].code,&a[j].cost,&a[j].iteam);
         fprintf(ptr,"%d %.2f %d\n",a[j].code,a[j].cost,a[j].iteam);
    }
    fclose(ptr);
    float sum=0.0;
    ptr=fopen("yuv.txt","r");
    for(int j=0;j<5;j++)
    {
         fscanf(ptr,"%d %f %d",&b[j].code,&b[j].cost,&b[j].iteam);
         sum=sum+b[j].cost;
    }
    printf("%f ",sum);
    return 0;
}