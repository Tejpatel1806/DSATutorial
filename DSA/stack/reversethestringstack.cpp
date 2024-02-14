#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    stack<char> st1;
    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        st.push(ch);
    }
    while(!st.empty())
    {
        st1.push(st.top());
        st.pop();
    }
    while(!st1.empty())
    {
        cout<<st1.top();
        st1.pop();
    }
    return 0;

}