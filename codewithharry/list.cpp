#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
 list<int>::iterator it;
 for(it=lst.begin();it!=lst.end();it++)
 {
   cout<<*it<<" ";
 }

}
int main()
{
    list<int>list1;
   // list<int>list2(7);//empty list of size 7
    list1.push_back(78);
    list1.push_back(5);
   // list<int>:: iterator itr=list1.begin();
   // cout<<*itr<<endl;
    //itr++;
    //cout<<*itr<<endl;
    list1.remove(5);//remove karva mate
    display(list1);
    list<int>list2(4);
    list<int>::iterator abc=list2.begin();
    *abc=45;
    abc++;
    *abc=5;
    abc++;
    *abc=74;
    list2.sort();//sort karva mate
    list1.merge(list2);//merge karva mate
    display(list2);
    return 0;
}