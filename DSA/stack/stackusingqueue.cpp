#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stack1
{
    public:
    int size;
    queue<int> q1;
    queue<int> q2;
    stack1()
    {
        size = 0;
    }
    void push(int val)
    {
        q2.push(val);
        size++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        q1.pop();
        size--;
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return size;
    }
};
int main()
{
    stack1 s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    return 0;
}