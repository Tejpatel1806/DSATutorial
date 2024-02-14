#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int totalsubset=0;
void printsubset(vector<char> input,vector<char> output,int index)
{
    if(index==input.size())
    {
        for(auto i:output)
        {
            cout<<i<<" ";
        }cout<<endl;
    totalsubset++;
    return;
    }
    printsubset(input,output,index+1);
    output.push_back(input[index]);
    printsubset(input,output,index+1);
}
int main()
{
    cout<<"Enter size: "<<endl;
    int size;
    cin>>size;
    vector<char> vec(size);
    vector<char> subset;
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>vec[i];
    }
    cout<<"power set is follows: ";
    printsubset(vec,subset,0);
    cout<<"Total number of subset is: ";
    cout<<totalsubset<<endl;
    return 0;
}