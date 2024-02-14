#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char str[20];

public:
    String()
    {
        strcpy(str, "");
    }
    String(char s[])
    {
        strcpy(str, s);
    }
    void display()
    {
        cout << str;
    }
    void getstr()
    {
        cin >> str;
    }
    bool operator==(String ss)
    {
        return (strcmp(str, ss.str) == 0) ? true : false;
    }
};
int main()
{
    String s1 = "yes";
    String s2 = "no";
    String s3;
    s3.getstr();
    if (s3 == s1)
        cout << "s3 and s1 are  equal\n";
    else if (s3 == s2)
        cout << "s3 and s2 are equal\n";
    else
        cout << "not equal\n";
    return 0;
}