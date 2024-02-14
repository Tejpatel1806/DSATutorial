#include<iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int> sort(stack<int> &l)
{
    stack<int> k;
    while(!l.empty())
    {
      int temp=l.top();
      l.pop();
      while(!k.empty() && k.top()>temp)
      {
          l.push(k.top());
          k.pop();
      }
      k.push(temp);
    }
    return k;
}
int main()
{
    stack<int> l,m;
    l.push(855);
    l.push(9);
    l.push(52);
    l.push(745);
    m=sort(l);
    while(!m.empty())
    {
        cout<<m.top()<<" ";
        m.pop();
    }
    return 0;
}