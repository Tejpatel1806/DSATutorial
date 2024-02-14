#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<a<<endl;
        }
        else if((a=='R' && b=='B') || (a=='B' && b='R'))
        {
            cout<<'B'<<endl;
        }
        else if((a=='G' && b=='B') || (a=='B' && b=='G'))
        {
            cout<<'B'<<endl;
        }
        else if((a=='G' && b=='B') || (a=='B' && b=='G'))
        {
            cout<<'G'<<endl;
        }
    }

}