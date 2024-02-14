#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    int inches;
};

class Room
{
    Distance length, bredth;
public:
    void getdata()
    {
        cout << "Enter Length of the room" << endl;
        cout << "Enter Feet Value : ";
        cin >> length.feet;
        cout << "Enter inches Value : ";
        cin >> length.inches;
        cout << endl;
        cout << "Enter Bredth of the room" << endl;
        cout << "Enter Feet Value : ";
        cin >> bredth.feet;
        cout << "Enter inches Value : ";
        cin >> bredth.inches;
        cout << endl << endl;
        if (length.inches >= 12)
        {
            length.feet = length.feet + (length.inches / 12);
            int temp;
            temp = length.inches / 12;
            length.inches = length.inches - 12 * (temp);
        }
        if (bredth.inches >= 12)
        {
            bredth.feet = bredth.feet + (bredth.inches / 12);
            int temp;
            temp = bredth.inches / 12;
            bredth.inches = bredth.inches - 12 * (temp);
        }
    }
    void calculate()
    {
        float area;
        float templ1, tempb1;
        templ1 = length.feet * 12 + length.inches;
        tempb1 = bredth.feet * 12 + bredth.inches;

        area = templ1 * tempb1;

        cout << "Total Area is : " << area / 144.000 << " Sq.Feet" << endl;


    }
};

int main()
{
    Room r1;
    r1.getdata();
    r1.calculate();

}