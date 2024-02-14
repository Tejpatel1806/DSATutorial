#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

struct Address
{
    int house_no;
    string area;
    string city;
    string state;
};
struct Employee
{
    int empid;
    string name;
    string designation;
    Address a;
};

int main()
{
    Employee e1;
    e1.empid = 2322345;
    e1.name = "TEJ";
    e1.designation = "JUNIOR MANAGER";
    e1.a.house_no = 10;
    e1.a.area = "DHANSURA";
    e1.a.city = "MODASA";
    e1.a.state = "GUJARAT";
    cout << endl;

    cout << setw(25) << "DETAILS OF EMPLOYEE : " << endl
         << endl;

    cout << setw(25) << "ID : " << e1.empid << endl
         << setw(25) << "NAME : " << e1.name << endl
         << setw(25) << "POST : " << e1.designation << endl
         << endl
         << setw(25) << "ADDRESS OF EMPLOYEE : "
         << endl
         << endl
         << setw(25) << "HOUSE NUMBER : " << e1.a.house_no << endl
         << setw(25) << "AREA : " << e1.a.area << endl
         << setw(25)
         << "CITY : " << e1.a.city << endl
         << setw(25) << "STATE : " << e1.a.state << endl;
}