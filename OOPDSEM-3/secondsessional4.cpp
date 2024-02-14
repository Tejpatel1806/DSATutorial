#include <iostream>
#include<string.h>
using namespace std;
class university;
class student
{
protected:
    char stuname[20];
    int id;
    int rollno;

public:
    void insert()
    {
        cout << "Enter the student record: ";
        cin >> stuname >> id >> rollno;
    }
    void display()
    {
        cout << "the students details is: ";
        cout << stuname << " " << id << " " << rollno << " " << endl;
    }
    void search(university d[], int n1);
};
class university : public student
{
    public:
    void search(university d[],int n1)
    {
        int t;
        cout << "do you want to student search via id or name if id then press 1 else 2: ";
        cin >> t;
        if (t == 1)
        {
            student::search(d, n1);
        }
        else if (t == 2)
        {
            char name[15];
            cout << "enter the name do you want to search: ";
            cin >> name;
            for (int i = 0; i < n1; i++)
            {
                if (strcmp(d[i].stuname,name)==0)
                {
                    cout << "details of students do you want to search is: ";
                    cout << d[i].stuname << " " << d[i].id << " " << d[i].rollno << " " << endl;
                }
            }
        }
    }
};
void student::search(university d[], int n1)
{
    int idf;
        cout << "enter the id do you want to search: ";
        cin >> idf;
        for (int i = 0; i < n1; i++)
        {
            if (d[i].id == idf)
            {
                cout << "details of students do you want to search is: ";
                cout << d[i].stuname << " " << d[i].id << " " << d[i].rollno << " " << endl;
            }
        }
}
int main()
{
    university p[3];
    for(int i=0;i<3;i++)
    {
        p[i].insert();
        p[i].display();
    }
    university r;
    r.search(p,3);
}