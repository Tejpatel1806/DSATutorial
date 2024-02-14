#include<iostream>
using namespace std;
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (*(ptr + j) < *(ptr + i)) 
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    cout<<"ARRAY ELEMENT AFTER THE SORTING IS: \n";
    for (i = 0; i < n; i++)
    {
        cout<<(*(ptr + i))<<" ";
    }
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENT: ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENT OF ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ARRAY ELEMENT BEFORE THE SORTING: \n";
    for(int j=0;j<n;j++)
    {
      cout<<*(arr+j)<<" ";
    }
    cout<<"\n";
    sort(n, arr);
    return 0;
}