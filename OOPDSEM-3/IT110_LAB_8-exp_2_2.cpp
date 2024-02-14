#include <iostream>
using namespace std;

void sort(char *p)
{
    cout << "\nString before sorting: ";
    for(int i=0; *(p+i)!='\0';i++)
        cout << *(p+i);

    char *temp;
    for(int i=0; *(p+i)!='\0';i++)
    {
        for(int j=i+1; *(p+j)!='\0';j++)
        {
            if (*(p + j) < *(p + i))
            {
                *temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = *temp;
            }
        }
    }
    cout << "\nString after sorting: ";
    for(int i=0; *(p+i)!='\0';i++)
        cout << *(p+i);
    cout<<endl<<endl;
}

int main()
{
    char s[100] = "hellohowareyou";
    char *p = s;
    sort(p);
    return 0;
}