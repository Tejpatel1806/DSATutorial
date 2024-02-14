#include <iostream>
using namespace std;

void Merge(int arr[], int l, int m, int h);
void MergeSortI(int arr[], int n);              //Iterative function
void MergeSortR(int arr[], int l, int h);       //Recursive function


void Merge(int a[], int l, int m, int h)
{
    int i, j, k;
    int b[100];
    i = l, j = m + 1, k = l;
    while (i <= m && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= m)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for (i = l; i <= h; i++)
        a[i] = b[i];
}

//Iterative function
void MergeSortI(int arr[], int n)
{
    int p, i, l, m, h;
    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            m = (l + h) / 2;
            Merge(arr, l, m, h);
        }
    }
    if (p / 2 < n)
        Merge(arr, 0, p / 2 - 1, n - 1);
}

//Recursive function
void MergeSortR(int arr[], int l, int h)
{
    int m;
    if (l < h)
    {
        m = (l + h) / 2;
        MergeSortR(arr, l, m);
        MergeSortR(arr, m + 1, h);
        Merge(arr, l, m, h);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    MergeSortR(arr, 0, n - 1);
    MergeSortI(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}