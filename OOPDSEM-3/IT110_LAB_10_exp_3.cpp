#include <iostream>
using namespace std;

class Array
{
private:
    int size;
    int *pointer;

public:
    Array(int s)
    {
        size = s;
        pointer = new int[s];
    }
    void Input()
    {
        cout << "Enter the array elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> *(pointer + i);
        }
    }
    void operator=(Array a)
    {
        for (int i = 0; i < a.size; i++)
        {
            *(pointer + i) = *(a.pointer + i);
        }
    }
    void print()
    {
        cout << "Elements in destination object after copying: ";
        for (int i = 0; i < size; i++)
        {
            cout << *(pointer + i) << " ";
        }
        cout << endl;
    }
    ~Array() {}
};

int main()
{
    Array a1(10), a2(10);
    a1.Input();
    Array a3 = a1;
    cout << "Elements in destination object after copying using copy constructor: ";
    a3.print();
    a2 = a1;
    cout << "Elements in destination object after copying using assignment overloading: ";
    a2.print();
    return 0;
}