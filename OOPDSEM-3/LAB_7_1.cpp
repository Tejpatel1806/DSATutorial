#include <iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
};

class Student : public Person
{
    protected:
    int roll_no;
    string branch;
};

class Exam : public Student
{
    protected:
    int sub1marks;
    int sub2marks;

    public:
    void input()
    {
        cout<<"Enter the name and age: ";
        cin>>name>>age;
        cout<<"Enter the roll no. and branch: ";
        cin>>roll_no>>branch;
        cout<<"Enter the marks of subject 1 and subject 2(out of 100): ";
        cin>>sub1marks>>sub2marks;
    }
    void print()
    {
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nRoll No.: "<<roll_no<<"\nBranch: "<<branch<<"\nSubject 1 marks: "<<sub1marks<<"\nSubject 2 marks: "<<sub2marks<<endl;
    }
};


int main()
{
    Exam p;
    p.input();
    p.print();
    return 0;
}