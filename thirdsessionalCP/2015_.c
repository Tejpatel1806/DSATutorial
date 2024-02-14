#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    struct pqr
    {
        int id;
        char name[50];
        int unique;
    };
    struct pqr u[5],m[5];
    FILE *ptr1;
    ptr1=fopen("fgv.txt","w");
    for(int i=0;i<5;i++)
    {
        scanf("%d %s %d",&u[i].id,u[i].name,&u[i].unique);
        fprintf(ptr1,"%d %s %d\n",u[i].id,u[i].name,u[i].unique);
    }
    fclose(ptr1);
    ptr1=fopen("fgv.txt","r");
    for(int i=0;i<5;i++)
    {
        fscanf(ptr1,"%d %s %d",&m[i].id,m[i].name,&m[i].unique);
        if(m[i].id==atoi(argv[1]) || m[i].id==atoi(argv[2]) || m[i].id==atoi(argv[3]))
        {
            printf("%d %s %d\n",m[i].id,m[i].name,m[i].unique);
        }  
    }

}