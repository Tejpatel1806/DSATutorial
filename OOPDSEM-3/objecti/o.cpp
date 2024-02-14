#include<bits/stdc++.h>
using namespace std;
class student
{
    protected:
    int rollno;
    char name[20];
    public:
    void getdata()
    {
    cout<<"enter the roll no and name of the student: ";
    cin>>rollno>>name;
    }
    void putdata()
    {
    cout<<"the roll no and name of the student: ";
    cout<<rollno<<" "<<name;
    }
};
int main()
{
    student s1;
    s1.getdata();
    ofstream abc("file2.txt",ios::binary);
    abc.write((char *)&s1,sizeof(s1));
    abc.close();
    student s2;
    ifstream def("file2.txt",ios::binary);
    def.read((char *)&s2,sizeof(s2));
    s2.putdata();
    return 0;
}