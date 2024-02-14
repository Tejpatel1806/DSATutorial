#include <stdio.h>
#include <stdlib.h>

struct books
{
    int ISBN;
    char name[30];
    float price;
};

int main()
{
    int n,n1;
    FILE *p;
    printf("Enter the no. you want to enter books detail : ");
    scanf("%d",&n);
    struct books b[n],c[n];
    p=fopen("bookinfo.txt","w");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the book ISBN no. name and price\n");
        scanf("%d %s %f",&b[i].ISBN,b[i].name,&b[i].price);
        fprintf(p,"%d %s %f\n",b[i].ISBN,b[i].name,b[i].price);
    }
    fclose(p);

    p=fopen("bookinfo.txt","r");
    printf("Enter the ISBN number you want to search : ");
    scanf("%d",&n1);
    for (int i = 0; i < n; i++)
    {
        fscanf(p,"%d %s %f",&c[i].ISBN,c[i].name,&c[i].price);
        if (c[i].ISBN==n1)
        {  
            printf("ISBN : %d , NAME : %s , PRICE : %f\n",c[i].ISBN,c[i].name,c[i].price);
            break;
        }
    }
    fclose(p);
return 0;
}