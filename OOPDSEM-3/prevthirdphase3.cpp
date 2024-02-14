#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class employee
{
    private:
    int salary;
    int id;
    char name[20];
    public:
    employee(){}
    employee(const employee &s)
    {
        cout<<"hello";
        salary=s.salary;
        id=s.id;
        strcpy(name,s.name);
    }
    void operator =(employee s2)
    {
        cout<<"hi"<<endl;
        salary=s2.salary;
        id=s2.id;
        strcpy(name,s2.name);
    }
    void getdata()
    {
        cout<<"ENTER THE VALUE OF THIS EMPLOYEE: ";
        cin>>salary>>id>>name;
    }
    void printdata()
    {
        cout<<"DETAILS OF THIS EMPLOYEE IS: ";
        cout<<salary<<" "<<id<<" "<<name<<endl;
    }
};
int main()
{
    employee s4;
    s4.getdata();
    employee s7=s4;
    s7.printdata();
    employee s8;
    s8=s4;
    s8.printdata();
    return 0;
}