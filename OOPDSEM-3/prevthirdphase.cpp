#include<iostream>
using namespace std;
class person
{
    public:
    virtual void display(){}
};
class student:public person
{
   protected:
   int rollno;
   char name[20];
   int stu_id;
   public:
   void display()
   {
       cout<<"ENTER THE ROLL NO OF THIS STUDENT: ";
       cin>>rollno;
       cout<<"ENTER THE NAME OF THIS STUDENT: ";
       cin>>name;
       cout<<"ENTER THE STUDENT ID OF THIS STUDENT: ";
       cin>>stu_id;
   }
};
class employee:public person
{
   protected:
   int salary;
   char name[20];
   int emp_id;
   public:
   void display()
   {
       cout<<"ENTER THE SALARY OF THIS EMPLOYEE: ";
       cin>>salary;
       cout<<"ENTER THE NAME OF THIS EMPLOYEE: ";
       cin>>name;
       cout<<"ENTER THE EMPLOYEE ID OF THIS EMPLOYEE: ";
       cin>>emp_id;
   }
};
int main()
{
    person *p1,*p2;
    employee e;
    student s;
    p1=&e;
    p2=&s;
    p1->display();
    p2->display();
    return 0;
}
