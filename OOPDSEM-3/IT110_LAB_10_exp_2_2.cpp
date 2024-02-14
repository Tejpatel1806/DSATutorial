#include <iostream>
using namespace std;

class Square;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void Input()
    {
        cout << "Enter the length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
    friend void operator- (Rectangle r,Square s);  
};

class Square
{
private:
    int length;

public:
    void Input()
    {
        cout << "Enter the length of square: ";
        cin >> length;
    }
    friend void operator- (Rectangle r,Square s);
};

void operator- (Rectangle r,Square s)
{
    cout <<"Rectangle length and Square length subtraction: "<<r.length - s.length << endl;
    cout <<"Rectangle breadth and Square length subtraction: "<<r.breadth - s.length << endl;
}

int main()
{
    Rectangle r;
    Square s;
    r.Input();
    s.Input();
    r - s;
    return 0;
}