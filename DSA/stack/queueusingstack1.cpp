#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class queue1
{
    public:
    stack<int> s1;
    stack<int> s2;
    void enqueue(int x)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue()
    {
        int x=-1;
        if(s1.empty())
        {
            cout<<"Queue is empty: ";
        }
        else
        {
             x=s1.top();
             s1.pop();
        }
        return x;
    }

};
int main()
{
    queue1 q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    cout<<q.dequeue()<<" ";
    return 0;
}