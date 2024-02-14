#include<iostream>
#include<string.h>
using namespace std;
class string2
{
    private:
    char asd[10];
    public:
    void get()
    {
        cout<<"Enter the string:";
        cin>>asd;
    }
    void display()
    {
        cout<<"THis string is: ";
        cout<<asd<<endl;
    }
    int operator ==(string2 s1)
    {
        if(strcmp(asd,s1.asd)==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main()
{
    string2 s1,s2;
    s1.get();
    s1.display();
    s2.get();
    s2.display();
    if(s1==s2)
    {
        cout<<"BOTH STRING ARE EQUAL";
    }
    else{
        cout<<"BOTH STRING ARE NOT EQUAL";
    }
    return 0;
}