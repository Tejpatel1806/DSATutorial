#include<iostream>
using namespace std;
class base1
{
    protected:
    char name[20];
    int id;
    int age;
    public:
    void getdata()
    {
        cout<<"enter the value of name,id,age:";
        cin>>name>>id>>age;
    }
};
class base2
{
    protected:
    char deptname[20];
    int des;
    int salary;
    int date;
    public:
    void getdata2()
    {
        cout<<"enter the value of department,salary,date of joining,des:";
        cin>>deptname>>salary>>date>>des;
    }
};
class derived:public base1,public base2
{
   public:
   void display()
   {
       cout<<"name is: "<<name<<endl;
       cout<<"id is: "<<id<<endl;
       cout<<"age is: "<<age<<endl;
       cout<<"department name is: "<<deptname<<endl;
       cout<<"salary is: "<<salary<<endl;
       cout<<"date of joining is: "<<date<<endl;
       cout<<"des is: "<<des<<endl;
   }
};
int main()
{
    derived a1[3];
    for(int i=0;i<3;i++)
    {
        a1[i].getdata();
        a1[i].getdata2();
        a1[i].display();
    }
    return 0;
}
