#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(15);
    st.push(20);
    st.push(-5);
    st.push(5);
    int min = 100;
    while (!st.empty())
    {
        int x = st.top();
        if (x < min)
        {
            min = x;
        }
        st.pop();
    }
    cout << min << endl;
}