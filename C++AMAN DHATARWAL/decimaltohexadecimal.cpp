#include<iostream>
using namespace std;
void convert(int n)
{
    char arr[100];
    int i=0;
    while(n!=0)
    {
        int a=0;
        a=n%16;
        if(a<10)
        {
            arr[i]=a+48;
            i++;
        }
        else
        {
            arr[i]=a+55;
            i++;
        }
        n=n/16;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}
int main()
{
    int p;
    cin>>p;
    convert(p);
    return 0;
}