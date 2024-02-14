#include <iostream>
using namespace std;

bool compare(char *str1, char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0' && *str2 == '\0')
            return true;
        str1++;
        str2++;
    }

    return false;
}

int main()
{
    char str1[] = "abcd";
    char str2[] = "efgh";

    if (compare(str1, str2) == 1)
        cout << str1 << " " << str2 << " are Equal";
    else
        cout << str1 << " " << str2 << " are not Equal";

    return 0;
}