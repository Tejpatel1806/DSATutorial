#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct abc
    {
        char name[25];
        int age;
        int height;
        struct abc *next;
    };
    void print(struct abc *list)
    {
        struct abc *ptr;
        ptr=list;
        while(ptr!=NULL)
        {
            printf("%s %d %d\n",ptr->name,ptr->age,ptr->height);
            ptr=ptr->next;
        }
    }
    void edit(struct abc *list,char abc[],int f,int h)
    {
        struct abc *ptr1;
        ptr1=list;
        while(strcmp(ptr1->name,abc)!=0)
        {
            ptr1=ptr1->next;
        }
        ptr1->age=f;
        ptr1->height=h;
    }
    void countage(struct abc *list,int s,int n)
    {
        int count=0,count1=0;
        struct abc *ptr1;
        ptr1=list;
        while(ptr1!=NULL)
        {
           if(ptr1->age>s)
           {
                count++;
           }
           if(ptr1->height>n)
           {
               count1++;
           }
           ptr1=ptr1->next;
        }
        printf("The number of student whose age is above specified age is %d\n",count);
        printf("The number of student whose height is above specified height is %d\n",count1);
    }
int main()
{
    struct abc *head,*second,*third,*fourth;
    head=(struct abc *)malloc(sizeof(struct abc));
    second=(struct abc *)malloc(sizeof(struct abc));
    third=(struct abc *)malloc(sizeof(struct abc));
    fourth=(struct abc *)malloc(sizeof(struct abc));
    strcpy(head->name,"TEJ");
    head->age=25;
    head->height=78;
    head->next=second;
    strcpy(second->name,"TIRTH");
    second->age=35;
    second->height=74;
    second->next=third;
    strcpy(third->name,"VAISHAL");
    third->age=45;
    third->height=72;
    third->next=fourth;
    strcpy(fourth->name,"HARSHIL");
    fourth->age=50;
    fourth->height=71;
    fourth->next=NULL;
    printf("Details of student:\n");
    print(head);
    printf("Enter the name of the student do you want to edit and enter his edited age and height:\n");
    char vgb[50];
    int u;
    int vc;
    scanf("%s %d %d",vgb,&u,&vc);
    edit(head,vgb,u,vc);
    printf("The edited list is:\n");
    print(head);
    printf("Enter the age and height do you want to find above group:\n");
    int ghy,yuh;
    scanf("%d %d",&ghy,&yuh);
    countage(head,ghy,yuh);
    return 0;
}