#include <iostream>
using namespace std;
//1>example of this type:-
// class b
// {
//     public:
//     b(int a)
//     {
//         cout<<"one argument base class:";
//     }
// };
// class c:public b
// {
//     public:
//     c()
//     {
//         cout<<"default constructor of c:";
//     }
//     c(int a1)
//     {
//         cout<<"one argument of derived";
//     }
// };
// int main()
// {
//    c c1(5);
//    return 0;
// }
// 2>example of this type:-
class a
{
    public:
    a(int a)
    {
        cout<<"hello";
    }
};
class b:public a
{
    public:
    //b():a(){}
    b(int a1):a(a1)
    {
        cout<<"ho";
    }
};
int main()
{
    //b b1;
    b b2(5);
    return 0;
}
// class Person
// {
// public:
//     Person(int x) { cout << "Person::Person(int ) called" << endl; }
// };
// class Faculty : public Person
// {
// public:
//     Faculty(int x) : Person(x)
//     {
//         cout << "Faculty::Faculty(int ) called" << endl;
//     }
// };
// class Student : public Person
// {
// public:
//     Student(int x) : Person(x)
//     {
//         cout << "Student::Student(int ) called" << endl;
//     }
// };
// class TA : public Faculty, public Student
// {
// public:
//     TA(int x) : Student(x), Faculty(x)
//     {
//         cout << "TA::TA(int ) called" << endl;
//     }
// };
// int main()
// {
//     TA ta1(30);
// }