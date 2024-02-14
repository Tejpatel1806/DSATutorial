#include<iostream>
using namespace std;
struct employee{
    private:
    int id;
    int salary;
    public:
    void getdata()
    {
        cout<<"Enter the data of this employee:";
        cin>>id>>salary;
    }
    void display()
    {
        cout<<"the data of this employee:";
        cout<<id<<" "<<salary;
    }
};
int main()
{
    employee a[3];
    for(int i=0;i<3;i++)
    {
        a[i].getdata();
        a[i].display();
        cout<<endl;
    }
    return 0;
}