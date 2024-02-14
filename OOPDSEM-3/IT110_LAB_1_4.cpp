#include<iostream>
using namespace std;
int main()
{
    int num,x=2,flag;
    cout<<"Enter number ";
    cin>>num;
    while (x!=num)
    {
        if (num%x==0)
        {
            flag=1;
            break;
        }
        x++;
    }
    if (flag==1)
    {
        cout<<"Number is composite";
    }
    else
    {
        cout<<"Number is prime";
    }
    return 0;
}