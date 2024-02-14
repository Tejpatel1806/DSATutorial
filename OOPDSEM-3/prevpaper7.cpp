#include<iostream>
using namespace std;
struct student{
    int rollno;
    char name[20];
    char branch[20];
    int marks;
};
int highestmark(student a[],int b)
{
    int index;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i].marks<a[j].marks)
            {
                index=j;
            }
        }
    }
    return index;
}
void read(student a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cin>>a[i].rollno>>a[i].name>>a[i].branch>>a[i].marks;
    }
}
void display(student a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<a[i].rollno<<" "<<a[i].name<<" "<<a[i].branch<<" "<<a[i].marks<<endl;
    }
}
int main()
{
    student a[5];
    read(a,5);
    cout<<"information of student:"<<endl;
    display(a,5);
    cout<<"index who got highest marks in structure:";
    int x=highestmark(a,5);
    cout<<(x-1)<<endl;
    return 0;
}