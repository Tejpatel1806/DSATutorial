#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;
    int element;
    for(int i=0;i<4;i++)
    {
        cout<<"enter the element do you want to add: ";
        cin>>element;
        vec1.push_back(element);
    }
   // vec1.pop_back();//aam karvathi last element pop thai jase
    display(vec1);
    vector<int> :: iterator iter=vec1.begin();
    vec1.insert(iter+1,4,566);//khali iter aetle first position and iter+1 aetle second position ae insert thase
    display(vec1);
    return 0;
}