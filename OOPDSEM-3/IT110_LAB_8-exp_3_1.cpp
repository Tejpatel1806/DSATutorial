#include<iostream>
using namespace std;
class student{
    private:
    char name[20];
    int marks;
    public:
    void getdata()
    {
        cout<<"enter the data for this student: ";
        cin>>name>>marks;
    }
    void printdata()
    {
        cout<<"the data of this student is: ";
        cout<<name<<" "<<marks;
        cout<<endl;
    }
};
int main()
{
    student *ptr=new student[3];
    for(int i=0;i<3;i++)
    {
        (ptr+i)->getdata();
        (ptr+i)->printdata();
    }
    return 0;
}