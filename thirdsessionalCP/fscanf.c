#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("xyz.txt","w");
    char abc[50]="this is my";
    int s=35;
    float f=52.01;
    fprintf(ptr,"%s %d %f",abc,s,f);
    fclose(ptr);
    ptr=fopen("xyz.txt","r");
    char cfg[50];
    int y;
    float u;
    fscanf(ptr,"%[^\n] %d %f",cfg,&y,&u);
    printf("%s\n %d\n %f\n",cfg,y,u);
    fclose(ptr);
    return 0;
}