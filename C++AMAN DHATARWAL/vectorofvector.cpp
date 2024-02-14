#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<vector<int>> v;
    vector<int> temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
    for(int j=0;j<v.size();j++)
    {
        print(v[j]);
    }
    cout<<"size is:"<<v.size()<<endl;
   return 0;
}