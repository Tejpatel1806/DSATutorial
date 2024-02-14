#include <iostream>
using namespace std;

void strcpy(char s1[],char s2[])
{
    char *p = s1;
    char *p1 = s2;
    for(int i=0;s1[i]!='\0';i++)
    {
        *(p1+i) = *(p+i); 
    }
    for(int i=0;s1[i]!='\0';i++)
    {
        cout << *(p1+i); 
    }
    cout<<endl;
}

int main()
{
    char s1[] = "HelloHi";
    char s2[50];
    cout<<"Source string: ";
    for(int i=0;s1[i]!='\0';i++)
        cout<<s1[i];
    cout<<endl;
    cout << "Destination string: ";
    strcpy(s1,s2);
    return 0;
}