#include <iostream>
using namespace std;

int partition(int arr[], int l, int h);
void QuickSort(int arr[], int l, int h);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int arr[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(arr, l, h);
        QuickSort(arr, l, j - 1);
        QuickSort(arr, j + 1, h);
    }
}

int partition(int arr[], int l, int h)
{
    int p = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] <= p)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return i + 1;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    QuickSort(arr, 0, n - 1);

    cout << "Sorted order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}