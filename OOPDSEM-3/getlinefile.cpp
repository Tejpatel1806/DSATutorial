#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream abc("file1.txt");
    abc<<"i am patel tej sandipkumar: \n"
       <<"i am currently in sem-3: \n"
       <<"i am in ddu university: \n";
       return 0;
}
int main()
{
    ifstream asd("file1.txt");
    char buffer[80];
    while(!asd.eof())
    {
        asd.getline(buffer,80);
        cout<<buffer<<endl;
    }
    return 0;
}
