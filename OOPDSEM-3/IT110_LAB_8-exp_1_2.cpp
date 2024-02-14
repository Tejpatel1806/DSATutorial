#include <iostream>
using namespace std;

void findSmallestNum(int *ptr, int n);

int main()
{
    int n;
    cout << "Enter the number of elements of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *p = arr;
    findSmallestNum(p, n);
    return 0;
}

void findSmallestNum(int *ptr, int n)
{
    int t;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (*(ptr + j) < *(ptr + i))
            {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    cout << "Smallest Number is: " << *(ptr) << " ";
}