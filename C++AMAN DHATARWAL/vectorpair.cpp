#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
}
int main()
{
    vector<pair<int,int>> v;//={{1,2},{2,3},{3,4}};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
       // v.push_back(make_pair(x,y));
    }
    print(v);
    return 0;

}
int main()
{
    int N;
    cin>>N;
    vector<int> v[N];//N vector bani gaya 6
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

}