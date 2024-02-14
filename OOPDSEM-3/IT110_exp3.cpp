#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "enter the size of the union set:";
    cin >> n; //scan the size of universal set
    int a[n];
    cout << "enter the element of union set:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; //scan the element of universal set
    }
    int n1;
    int o = 0;
    int c[100];
label:
    cout << "enter the size of the A set:";
    cin >> n1; //scan the size of any set
    if (n1 > n)
    {
        cout << "impossible try again" << endl; //if the size of any set is greater than the union set then display impossible try again
        goto label;
    }
    int b[n1];
vcf:
    cout << "enter the element of A set:";
    for (int i = 0; i < n1; i++)
    {
        cin >> b[i]; //scan the element of any set
    }
    int count1 = 0;
    for (int i = 0; i < n1; i++)
    {
        count1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                count1 = 1; //compare the element of any set to all the elements of univesal set and if they not equal then store in to another array
            }
        }
        if (count1 == 0)
        {
            cout << "their is impossible try again:" << endl; //if the element of any set is greater than the element in universal set then again it is not possible
            goto vcf;
        }
    }

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n1; j++)
        {
            if (a[i] == b[j])
            {
            }
            else
            {
                count++;
            }
        }
        if (count == n1)
        {
            c[o] = a[i];
            o++;
        }
    }
    for (int k = 0; k < o; k++)
    {
        for (int g = k + 1; g < o; g++)
        {
            if (c[k] == c[g])
            {
                c[k] = 0; //check out any duplicate element is present in c array then put one of them as a zero and print only those element who not equal to zero
            }
        }
    }
    cout<<"Compliment of Set A:"<<endl;
    for (int i = 0; i < o; i++)
    {
        if (c[i] != 0)
        {
            cout << c[i] << " ";//print the complement array
        }
    }
    if (o == 0)
    {
        cout << "NULL SET" << endl; //if the element of union set and any set  are equal then print the null set
    }
    return 0;
}