#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct abc
    {
        int roll_no;
        int id;
        char name[20];
    };
    struct abc *ptr;
    int size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    ptr=(struct abc *)malloc(size*sizeof(struct abc));
    for(int i=0;i<size;i++)
    {
        scanf("%d%d%s",&(ptr+i)->roll_no,&(ptr+i)->id,(ptr+i)->name);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d %d %s\n",(ptr+i)->roll_no,(ptr+i)->id,(ptr+i)->name);
    }
    printf("Enter the id do you want to search:\n");
    int y;
    scanf("%d",&y);
    for(int i=0;i<size;i++)
    {
        if((ptr+i)->id==y)
        {
            printf("%d %d %s\n",(ptr+i)->roll_no,(ptr+i)->id,(ptr+i)->name);
            break;
        }
    }
    return 0;

}