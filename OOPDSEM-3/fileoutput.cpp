#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch = 'n';
    int j = 85;
    string s1 = "tej";
    string s2 = "patel";
    ofstream outfile("file.txt");
    outfile << ch << " " << j << " " << s1 << " " << s2;
    return 0;
}
int main()
{
    char ch;
    int j;
    string str1;
    string str2;
    ifstream infile("file.txt"); 
    infile >> ch >> j  >> str1 >> str2;
    cout << ch << endl 
         << j << endl
         << str1 << endl
         << str2 << endl;
    return 0;
}