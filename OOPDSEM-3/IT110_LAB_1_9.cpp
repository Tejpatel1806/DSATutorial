#include <iostream>
using namespace std;
int main()
{
    int num;
    int temp = 0, n1 = 0, n2 = 1;
    cout << "enter number" << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "0"<<" ";
    }
    else if (num == 1)
    {
        cout << "0 " <<" 1" ;
    }
    else
    {cout << " 0 "  << " 1 " ;
        while (num)
        {

            temp = n1 + n2;
            cout << temp<<" ";
            n1 = n2;
            n2 = temp;
            num--;
        }
    }
    return 0;
}