#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort(char *str1[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(strcmp(str1[i],str1[j])<0)
           {
                char *temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
           }
       }
   }
}
int main()
{
    char *str[5]={"zxca","asdf","opiu","nbcc","lkop"};
    sort(str,5);
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}