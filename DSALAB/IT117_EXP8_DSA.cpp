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
        QuickSort(arr, l, j);
        QuickSort(arr, j + 1, h);
    }
}

int partition(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (arr[i] <= p);
        do
        {
            j--;
        } while (arr[j] > p);
        if (i < j)
            swap(&arr[i], &arr[j]);
    } while (i < j);
    swap(&arr[l], &arr[j]);
    return j;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    QuickSort(arr, 0, n);
    
    cout << "Sorted order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}