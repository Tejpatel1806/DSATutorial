#include<bits/stdc++.h>
using namespace std;
void print(map<int,vector<int>> p)
{
    for(auto it=p.begin();it!=p.end();it++)
    {
        cout<<(*it).first<<" ";
        vector<int> a=(*it).second;
        for(int h=0;h<a.size();h++)
        {
            cout<<a[h]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    map<int,vector<int>> p;
    for(int i=0;i<3;i++)
    {
        int s;
        cin>>s;
        vector<int> temp;
        for(int i=0;i<3;i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        p[s]=temp;
    }
    print(p);
    cout<<"size:"<<p.size()<<endl;
    return 0;
}