#include <iostream>
#include <cstring>
using namespace std;

class Concate
{
private:
    string s1;

public:
    void getInput()
    {
        cout << "Enter the string : ";
        cin >> s1;
    }
    Concate operator+(Concate &c2)
    {
        Concate c1;
        c1.s1 = s1 + c2.s1;
        cout << "Concatenate string is: ";
        return c1;
    }
    void operator==(Concate &c1)
    {
        int a = s1.compare(c1.s1);
        if (a == 0)
            cout << "Both are equal." << endl;
        else if (a > 0)
            cout << s1 << " greater than " << c1.s1 << endl;
        else
            cout << s1 << " smaller than " << c1.s1 << endl;
    }
    void print()
    {
        cout << s1 << endl;
    }
};

int main()
{
    Concate c1, c2, c3;
    c1.getInput();
    c2.getInput();
    cout<<endl;
    c3 = c1 + c2;
    c3.print();
    cout<<endl;
    c1 == c2;
    cout<<endl;
    return 0;
}