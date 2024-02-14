#include <iostream>
using namespace std;

class shape
{
public:
    int length;
    virtual void Input()
    {
        cin >> length;
    }
    virtual void Area()
    {
        cout << "The area of the square is: " << length * length << endl;
    }
    virtual void Area1()
    {
        cout << "The area of the circle is: " << 3.14 * length * length << endl;
    }
};

class square : public shape
{
public:
    void Input()
    {
        cin >> length;
    }
    void Area()
    {
        cout << "The area of the square is: " << length * length << endl;
    }
};

class circle : public shape
{
public:
    void Input()
    {
        cin >> length;
    }
    void Area1()
    {
        cout << "The area of the circle is: " << 3.14 * length * length << endl;
    }
};

int main()
{
    shape *s1, *s2;
    square sq;
    circle c;
    s1 = &sq;
    s2 = &c;
    cout << "Enter the length of square: ";
    s1->Input();
    cout << "Enter the radius of circle: ";
    s2->Input();
    s1->Area();
    s2->Area1();
    return 0;
}