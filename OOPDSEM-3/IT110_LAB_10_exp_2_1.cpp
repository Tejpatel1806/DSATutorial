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
    void Compare(Rectangle r, Square s);
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
    friend void Rectangle::Compare(Rectangle r, Square s);
};

void Rectangle::Compare(Rectangle r, Square s)
{
    if (r.length > s.length)
        cout << "Length of rectangle is greater than length of square." << endl;
    else if (r.length < s.length)
        cout << "Length of rectangle is smaller than length of square." << endl;
    if (r.breadth > s.length)
        cout << "Breadth of rectangle is greater than length of square." << endl;
    else if (r.breadth < s.length)
        cout << "Breadth of rectangle is smaller than length of square." << endl;
    if (r.length == s.length)
        cout << "Length of rectangle is equal to length of square." << endl;
    if (r.breadth == s.length)
        cout << "Breadth of rectangle is equal to length of square." << endl;
}

int main()
{
    Rectangle r;
    Square s;
    r.Input();
    s.Input();
    r.Compare(r, s);
    return 0;
}