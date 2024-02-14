#include <iostream>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
class employee
{
protected:
    int emp_id;
    int salary;
    char emp_name[20];

public:
    void getdata()
    {
        cout << "Enter the value of this Employee: ";
        cin >> emp_id >> salary >> emp_name;
    }
    void printdata()
    {
        cout << "The information of this employee is: ";
        cout << emp_id << " " << salary << " " << emp_name << endl;
    }
    void read()
    {
        employee s;
        char ch;
        ofstream ofline("abc.txt", ios::binary);
        do
        {
            s.getdata();
            ofline.write((char *)&s, sizeof(s));
            cout << "enter y if another employee details are then : ";
            cin >> ch;
        } while (ch == 'y');
        ofline.close();
    }
    void display()
    {
        ifstream ifline("abc.txt", ios::binary);
        employee s1;
        ifline.read((char *)&s1, sizeof(s1));
        while (!ifline.eof())
        {
            s1.printdata();
            ifline.read((char *)&s1, sizeof(s1));
        }
        ifline.close();
    }
    void insert()
    {
        employee sd;
        sd.getdata();
        ofstream offline;
        offline.open("abc.txt",ios::out|ios::binary|ios::app);
        offline.write((char *)&sd,sizeof(sd));
    }
    void retrive(int n)
    {
        int count=0;
        ifstream ifline("abc.txt", ios::binary);
        employee s1;
        ifline.read((char *)&s1, sizeof(s1));
        while (!ifline.eof())
        {
            if(s1.emp_id==n)
            {
            s1.printdata();
            count=1;
            break;
            }
            ifline.read((char *)&s1, sizeof(s1));
        }
        if(count==0)
        {
            cout<<"NO SUCH DATA FIND IN THIS FILE: ";
        }
        ifline.close();
    }
};
int main()
{
    employee s2;
    s2.read();
    s2.insert();
    s2.display();
    int n;
    cin>>n;
    s2.retrive(n);
    cout<<endl;
    s2.display();
    return 0;
}