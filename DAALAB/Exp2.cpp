// #include<bits/stdc++.h>
// using namespace std;
// void TOH(int n,char from,char aux,char to)
// {
//     if(n==0){return;}
//     TOH(n-1,from,aux,to);
//     cout<<from<<"->"<<to;
//     TOH(n-1,aux,to,from);
// }
// int main()
// {
//     int n;
//     cout<<"Enter total no of disk: ";
//     cin>>n;
//     TOH(n,'A','B','C');

// }

// fibonacci series using recursive and iterative

#include <bits/stdc++.h>
using namespace std;
void iterative(int n)
{
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (recursive(n - 1) + recursive(n - 2));
    }
}
int main()
{
    int n;
    cin >> n;
    iterative(n);
    int p=recursive(n);
    cout<<"nth fibonacci number using recursion is: "<<p;
    
}
