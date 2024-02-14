#include<stdio.h>
int main(int argc,char *argv[])
{
    printf("the value of argc is %d \n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("the argument %d is %s\n",i,argv[i]);
    }
    return 0;
}