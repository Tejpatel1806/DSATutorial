#include<iostream>
using namespace std;
class student{
    private:
    char name[20];
    int marks;
    char branch[25];
    int semester;
    public:
    void getdata()
    {
        cout<<"enter the data for this student: ";
        cin>>name>>marks>>branch>>semester;
    }
    void printdata()
    {
        cout<<"the data of this student is: "<<endl;
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"marks of this student is: "<<marks<<endl;
        cout<<"branch of this student is: "<<branch<<endl;
        cout<<"semester of this student is: "<<semester<<endl;
    }
};
int main()
{
    student *ptr[5];
    for(int i=0;i<5;i++)
    {
        ptr[i]=new student;
        ptr[i]->getdata();
        ptr[i]->printdata();
    }
    return 0;
}