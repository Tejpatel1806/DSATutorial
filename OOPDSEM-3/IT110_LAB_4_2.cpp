#include <iostream>
using namespace std;
class employee
{
	string name;
	string city;
	float bs;
	float da;
	float hra;
	float total;

public:
	void getdata()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout << "Enter City : ";
		cin >> city;
		cout << "Enter Basic Salary : ";
		cin >> bs;
		cout << "Enter DA Value : ";
		cin >> da;
		cout << "Enter HRA value : ";
		cin >> hra;
	}
	void calculate()
	{

		total = bs + bs * (da / 100) + bs * (hra / 100);
	}
	void display()
	{
		cout << "TOTAL SALARY IS : " << total;
	}
};
int main()
{
	employee e1;
	cout << "ENTER THE DETAILS : " << endl;
	e1.getdata();
	e1.calculate();
	e1.display();
	return 0;
}
