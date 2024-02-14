//reverse the stack using single stack
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void insertatbottom(stack<int> &st, int ele)
// {
//     if (st.empty())
//     {
//         st.push(ele);
//         return;
//     }
//     int topele = st.top();
//     st.pop();
//     insertatbottom(st, ele);
//     st.push(topele);
// }
// void reverse(stack<int> &st)
// {
//     if (st.empty())
//     {
//         return;
//     }
//     int ele = st.top();
//     st.pop();
//     reverse(st);
//     insertatbottom(st, ele);
// }
// int main()
// {
//     stack<int> k;
//     k.push(5);
//     k.push(4);
//     k.push(8);
//     k.push(6);
//     k.push(2);
//     reverse(k);
//     while (!k.empty())
//     {
//         int d = k.top();
//         cout << d << " ";
//         k.pop();
//     }
//     return 0;
// }




// reverse the stack using two stack
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> s1;
    s.push(4);
    s.push(14);
    s.push(24);
    s.push(34);
    s.push(44);
    while (!s.empty())
    {
        int ele = s.top();
        s.pop();
        s1.push(ele);
    }
    while (!s1.empty())
    {
        cout << s1.top();
        s1.pop();
    }
    return 0;
}