#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
    int stu_id;
    char stu_name[20];
    char grade;
    public:
    int stu_marks;
    student()
    {
        
    }
    void read(int a,char b[],int c,char d)
    {
        stu_id=a;
        strcpy(stu_name,b);
        stu_marks=c;
        grade=d;
    }
    void display()
    {
        cout<<stu_id<<" "<<stu_name<<" "<<stu_marks<<" "<<grade<<endl;
    }
};
int main()
{
    student s[5];
    student q;
    for(int i=0;i<5;i++)
    {
        int f,g;
        char j[20];
        char t;
        cin>>f>>g;
        cin>>j;
        cin>>t;
        s[i].read(f,j,g,t);
    }
    for(int j=0;j<5;j++)
    {
        s[j].display();
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        if(s[i].stu_marks<s[j].stu_marks)
        {
            q=s[i];
            s[i]=s[j];
            s[j]=q;
        }
    }
    for(int j=0;j<3;j++)
    {
        s[j].display();
    }
   return 0;
}