// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int a,b;
//         cin>>a>>b;
//         int s=a+b;
//         if(s%2==0)
//         {
//             cout<<"Bob"<<endl;
//         }
//         else
//         {
//             cout<<"Alice"<<endl;
//         }
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a-1<<endl;
        }
    }
}