//find out the middle element of the stack and delete it
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> m;
    vector<int> l;
    m.push(4);
    m.push(14);
    m.push(24);
    m.push(34);
    m.push(44);
    m.push(741);
    int s=m.size();
    int p;
    p=s/2;
    int o=0;
    cout<<s<<endl;
    while(o!=p)
    {
       l.push_back(m.top());
       m.pop();
       o++;
    }
    m.pop();
    for(int i=l.size()-1;i>=0;i--)
    {
        m.push(l[i]);
    }
    while(!m.empty())
    {
        cout<<m.top()<<" ";
        m.pop();
    }
    return 0;
}
