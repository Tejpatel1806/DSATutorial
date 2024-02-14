#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> p;
    p[1]="abc";
    p[2]="ced";
    p[3]="poi";
    p[1]="qwe";
    for(auto value: p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto it=p.find(7);
    if(it == p.end())
    {
        cout<<"No Value"<<endl;
    }
    else{
        cout<<(*it).first<<(*it).second<<endl;
    }
    p.erase(it);//matlab it jene point karto hase te bhusai jase ane jo te element j nai hou to te end ne point karto hase to error aavse
    return 0;
}