#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int a, int b, int c)
    {
        if (b >= 60)
        {
            b = b - 60;
            a++;
        }
        if (c >= 60)
        {
            c = c - 60;
            b++;
        }
        hour = a;
        minute = b;
        second = c;
    }
    Time operator+(Time &t)
    {
        Time t1;
        t1.hour = hour + t.hour;
        t1.minute = minute + t.minute;
        t1.second = second + t.second;
        if (t1.minute >= 60)
        {
            t1.minute = t1.minute - 60;
            t1.hour++;
        }
        if (t1.second >= 60)
        {
            t1.second = t1.second - 60;
            t1.minute++;
        }
        return t1;
    }
    void print()
    {
        cout << "HH/MM/SS: " << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter hour , minute and second for time 1: ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter hour , minute and second for time 2: ";
    cin >> h2 >> m2 >> s2;
    Time t1(h1, m1, s1), t2(h2, m2, s2);
    t1 = t1 + t2;
    t1.print();
    return 0;
}