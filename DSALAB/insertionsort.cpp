#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    InsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}