#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<endl<<"enter marks of student "<<i+1<<endl;
        cin>>a[i];
        if (a[i]>=80)
        {
            cout<<"A";
        }
        else if (a[i]>=60&&a[i]<=8)
        {
            cout<<"B";
        }
        else if (a[i]>=40&&a[i]<=60)
        {
            cout<<"C";
        }
        else
        {
            cout<<"D";
        }
    }

    return 0;
}