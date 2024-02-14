#include <iostream>
using namespace std;
class Complex
{
    int r, i;

public:
    void setdata()
    {      
        cout << "Enter the real amd imaginary value : ";
        cin >> r >> i;
    }
    void getdata()
    {
        cout << "After adding the complex Number is " << r << " "<< "+"<< " " << i << "i" << endl;
        cout << "Real = "<< r <<endl<< "Imaginary = " << i << endl;
    }
    void operator+=(Complex c)
    {
        r = r + c.r;
        i = i + c.i;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata();
    c2.setdata();
    c3 = c1;
    c3 += c2;
    c3.getdata();
    return 0;
}