#include<iostream>
#include<string.h>
using namespace std;
class abc
{
    char s[10];
    public:
    void get()
    {
        cout<<"Enter the string:";
        cin>>s;
    }
    void display()
    {
        cout<<"the string is:";
        cout<<" "<<s;
    }
    abc  operator +(abc c)
    {
        abc temp;
        strcat(s,c.s);
        strcpy(temp.s,s);
        return temp;;
    }
};
int main()
{
    abc a,b,c;
    a.get();
    b.get();
    c=a+b;
    a.display();
    return 0; 
}