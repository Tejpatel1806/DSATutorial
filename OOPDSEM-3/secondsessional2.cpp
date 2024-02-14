#include<iostream>
#include<string.h>
using namespace std;
void sort(char **str)
{
    char *temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
        if(strcmp(*(str+i),*(str+j))>0)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";
    }

}
int main()
{
    char *arry[5]={"abc","def","dfg","pqr","asd"};
    char *temp;
    sort(arry);
    return 0;
}