#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of character in string:\n";
    cin>>n;
    char a[n+1];
    cin>>a;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    return 0;

   
}