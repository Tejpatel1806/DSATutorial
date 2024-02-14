#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> p)
{
    for(auto &pr:p)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    unordered_map<int,string> p;
    p[1]="abc";
    p[2]="der";
    p[3]="asd";
    p[9]="qwe";
    print(p);
}
