#include<iostream>
using namespace std;
int numberofjumps(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return numberofjumps(n-1)+numberofjumps(n-2)+numberofjumps(n-3);
}
int main()
{
    int n1;
    cin>>n1;
    int s=numberofjumps(n1);
    cout<<s;
    return 0;
}