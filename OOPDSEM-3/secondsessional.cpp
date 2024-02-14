#include<iostream>
using namespace std;
const int n=6;
class array1
{
    public:
    int arr[100];
    array1()
    {
        for(int i=0;i<n;i++)
        {
            arr[i]=-1;
        }
    }
    void getdata()
    {
        cout<<"enter the value of array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void printdata()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
    int operator ==(array1 d)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==d.arr[i])
            {
            count++;
            }
        }
        if(count==n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    array1 p1,p2;
    p1.getdata();
    p2.getdata();
    int s=(p1==p2);
    if(s==1)
    {
        cout<<"both array are equal";
    }
    else
    {
        cout<<"both array are not equal";
    }
    return 0;
}
