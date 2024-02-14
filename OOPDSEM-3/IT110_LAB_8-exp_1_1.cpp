#include <iostream>
using namespace std;

void sort(int *ptr, int n);

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
    cout << "Elements after sorting: " << endl;
    sort(p, n);
    return 0;
}

void sort(int *ptr, int n)
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

    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";
}