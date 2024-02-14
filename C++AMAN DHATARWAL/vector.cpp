
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //vector<int> v(5);// 5 size no vector banse
    //vector<int> v(5,3);//5 size no vector ane te initialize with 3
    vector<int> v;
    for(int i=0;i<5;i++)
    {
    int n;
    cin>>n;
    v.push_back(n);//last ma add kare
    }
    v.pop_back();//last value ne nikade
    print(v);
    return 0;
}