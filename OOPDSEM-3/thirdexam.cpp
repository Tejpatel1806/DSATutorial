#include<iostream>
#include<string.h>
using namespace std;
// int main(void)
// {
//     int i,a=5;
//     int *ptr=new int[5*sizeof(int)];
//     for(i=0;i<5;i++)
//     {
//         *(ptr+i)=a++;
//     }
//     cout<<*(ptr++);
//     cout<<*ptr++;
//     cout<<(*ptr)++;
//     cout<<*++ptr;
//     cout<<++*ptr;
//     return 0;
// }
void fun(char** ptr)
{
    *(*ptr)++;
}
int main()
{
    char *str=new char[50*sizeof(char)];
    strcpy(str,"Hello");
    fun(&str);
    cout<<str;
    delete str;
}