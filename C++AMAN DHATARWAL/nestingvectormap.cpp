#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string,string>,vector<int>> m;
    // pair<int,int> p1,p2;
    // p1={1,2};
    // p2={2,3};//aa rite pair ma comparision thay tem pair aa order ma map ma jase
    // cout<<(p1<p2);//each element compare thay 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string fn,ln;
        int count;
        cin>>fn>>ln;
        cin>>count;
        for(int j=0;j<count;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto pr:m)
    {
        auto fullname=pr.first;
        auto list=pr.second;//pr.second[0] aam pan chale first element made aam karvathi
        cout<<fullname.first<<" "<<fullname.second<<endl;
        cout<<list.size()<<endl;
        for(auto element:list)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
}