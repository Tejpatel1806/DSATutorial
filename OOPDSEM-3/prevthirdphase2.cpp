#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class person
{
    private:
    char name[20];
    int rollno;
    int stuid;
    public:
    void getdata()
    {
        cout<<"ENTER THE DETAILS OF THIS EMPLOYEE: ";
        cin>>name>>rollno>>stuid;
    }
};
int main()
{
    ofstream offline1("filepqr.txt",ios::binary);
    person s;
    char k;
    do
    {
        s.getdata();
        offline1.write((char *)&s,sizeof(s));
        cout<<"DO  YOU WANT TO CONTINUE: ";
        cin>>k;
    } while (k=='Y' || k=='y');
    offline1.close();
    int count=0;
    person p1;
    ifstream online("filepqr.txt",ios::binary);
    online.read((char *)&p1,sizeof(p1));
    while(!online.eof())
    {
        count++;
        online.read((char *)&p1,sizeof(p1));
    }
    cout<<"TOTAL NUMBER OF OBJECT STORED IN FILE IS: "<<count<<endl;
    return 0;
}