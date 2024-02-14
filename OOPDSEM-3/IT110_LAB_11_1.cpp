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
        cout<< "Enter the id , name and salary of the employee: ";
        cin >> emp_id >> emp_name >> salary;
    }
    void printdata()
    {
        cout << "Employee ID: " << emp_id << "\nEmployee name: " << emp_name << "\nEmployee Salary: " << salary << endl;
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
    void update(int n1)
    {
        fstream file;
        file.open("abc.txt",ios::in|ios::binary|ios::out|ios::ate);
        file.seekg(0);
        file.read((char *)this,sizeof(*this));
        while(!file.eof())
        {
            if(emp_id==n1)
            {
                getdata();
                file.seekp(file.tellp()-sizeof(*this));
                file.write((char *)this,sizeof(*this));
            }
            file.read((char *)this,sizeof(*this));
        }
    }
    void deleteRecord(int t)
    {
        ifstream fin;
        ofstream fout;
        fin.open("abc.txt", ios::in | ios::binary);
        if (!fin)
            cout << "file not found";
        else
        {
            fout.open("tempfile.dat", ios::app | ios::binary);
            fin.read((char *)this, sizeof(*this));
            while (!fin.eof())
            {
                if (t != emp_id)
                    fout.write((char *)this, sizeof(*this));
                fin.read((char *)this, sizeof(*this));
            }
        }
        fout.close();
        fin.close();
        remove("abc.txt");
        rename("tempfile.dat", "abc.txt");
    }
};
int main()
{
    employee e;
    e.read();
    e.display();
    int check;
    cout << "Enter the Employee ID you want to find: ";
    cin >> check;
    e.retrive(check);
    cout<<"Enter the Employee ID you want to upadte: ";
    int check1;
    cin>>check1;
    e.update(check1);
    e.display();
    cout<<"Enter the Employee ID you want to delete: ";
    int check2;
    cin>>check2;
    e.deleteRecord(check2);
    e.display();
    return 0;
}