#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct abc
    {
        char name[20];
        int id;
        int percentage;
    };
    struct abc *ptr;
    int n;
    scanf("%d",&n);
    ptr=(struct abc *)calloc(n,sizeof(struct abc));
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d",(ptr+i)->name,&(ptr+i)->id,&(ptr+i)->percentage);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d\n",(ptr+i)->name,(ptr+i)->id,(ptr+i)->percentage);
    }
    int p=(ptr+0)->percentage;
    int pos;
    for(int i=0;i<n;i++)
    {
        if((ptr+i)->percentage>p)
        {
            p=(ptr+i)->percentage;
            pos=i;
        }
    }
    printf("details who got highest percentage:\n");
    printf("%s %d %d\n",(ptr+pos)->name,(ptr+pos)->id,(ptr+pos)->percentage);
    return 0;
}