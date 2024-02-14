#include<iostream>
using namespace std;
class employee
{
    private:
    char name[20];
    char city[15];
    int basicsalary;
    int da;
    int hra;
    public:
    void getdata()
    {
        cin>>name>>city>>basicsalary>>da>>hra;
    }
    float calculate()
    {
        float s=(basicsalary*(da/100));
        float d=(basicsalary*(hra/100));
         float total=basicsalary+s+d;
         return total;
    }
    void display()
    {
        cout<<name<<" "<<city<<" "<<basicsalary<<" "<<da<<" "<<hra<<" ";
    }
};
int main()
{
    employee e1;
    e1.getdata();
    float p=e1.calculate();
    e1.display();
    cout<<p;
    return 0;
}