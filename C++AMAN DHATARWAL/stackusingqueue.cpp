#include<bits/stdc++.h>
using namespace std;
class abcd
{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    abcd()
    {
        n=0;
    }
    void push(int val)
    {
        q2.push(val);
        n++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop()
    {
        q1.pop();
        n--;
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return n;
    }
};
int main()
{
    abcd abc;
    abc.push(1);
    abc.push(2);
    abc.push(3);
    abc.push(4);
    cout<<abc.top()<<endl;
    abc.pop();
    cout<<abc.top()<<endl;
    cout<<abc.size()<<endl;
    return 0;
}