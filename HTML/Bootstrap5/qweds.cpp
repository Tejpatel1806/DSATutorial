#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int p=0;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int s1=pow(2,i);
        int p1=s1*b;
        if(i==0)
        {
        s=s+(a+p1);
        }
        else
        {
            s=s+p1;
        }
        cout<<s<<endl;
    }
    return 0;
}