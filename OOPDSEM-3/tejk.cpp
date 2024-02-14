#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int c = 0, count = 0;
        int a = x;
        while (a<= y+2)
        {
             a = a + 2;
            for (int i = 2; i <= a; i++)
            {
                if (a % i == 0)
                {
                    count++;
                }
            }
            if (count == 1)
            {
                c++;
                count = 0;
            }
            else
            {
                a = a - 1;
                c++;
                count = 0;
            }
        }
        cout << c << endl;
    }
}