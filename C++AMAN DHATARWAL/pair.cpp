#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    p=make_pair(2,"abc");
    //p={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int> o[3];
    o[0]={1,2};
    o[1]={2,3};
    o[2]={3,4};
    swap(o[0],o[2]);
    for(int i=0;i<3;i++)
    {
        cout<<o[i].first<<" "<<o[i].second<<endl;
    }
    return 0;
}