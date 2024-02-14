#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    private:
    int a;
    int b;
    protected:
    int sum;
    int diff;
    int multi;
    int div;
    public:
    void setdata()
    {
        cout<<"enter the value a "<<endl;
        cin>>a;
        cout<<"enter the value b "<<endl;
        cin>>b;
    }
    void sum1()
    {
        sum=a+b;
        cout<<"the sum of two number is "<<sum<<endl;
    }
    void diff1()
    {
        diff=a-b;
        cout<<"the diff of two number is "<<diff<<endl;
    }
    void multi1()
    {
        multi=a*b;
        cout<<"the multi of two number is "<<multi<<endl;
    }
    void div1()
    {
        div=a/b;
        cout<<"the div of two number is "<<div<<endl;
    }
    void getdata()
    {
        cout<<"the value of a and b is "<<a<<" and "<<b<<endl;
    }
};
class ScientificCalculator
{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
class HybridCalculator : public simplecalculator, public ScientificCalculator
{
    
};
int main()
{
    HybridCalculator c1;
    c1.setdata();
    c1.sum1();
    c1.diff1();
    c1.multi1();
    c1.div1();
    c1.getDataScientific();
    c1.performOperationsScientific();
    return 0;
}