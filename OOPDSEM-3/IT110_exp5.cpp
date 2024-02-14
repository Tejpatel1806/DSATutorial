#include<iostream>
using namespace std;

void SymmetricDiff(int arr1[],int arr2[],int a,int b);

int main()
{
    int n, m;
    int c;

    cout << "Enter the number of elemnts of set 1: ";
    cin >> n;//scan the number of element of set 1
    cout << "Enter the number of elemnts of set 2: ";
    cin >> m;//scan the number of element of set 2

    int a[n], b[m];

    cout << "Enter the elements of the set 1:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];//scan the element of set 1
    }

    cout << endl;
    cout << "Enter the elements of the set 2:" << endl;
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];//scan the element of set 2
    }

    cout << endl;
    SymmetricDiff(a,b,n,m);
    return 0;
}


void SymmetricDiff(int arr1[],int arr2[],int a,int b)
{
    int c=a+b, temp,i,j;
    int b3[c],count=0;

    //to find the union set of set 1 and set 2
    for (i = 0; i < a; i++)
        b3[i] = arr1[i];
    
    for (j = 0; j < b; j++)
        b3[i + j] = arr2[j];
    

    //delete the duplicate element in union set
    for (i = 0; i < c - 1; i++)
    {
        for (j = i + 1; j < c; j++)
        {
            if (b3[i] == b3[j])
            {
                temp = b3[j];
                b3[j] = b3[c - 1];
                b3[c - 1] = temp;
                c--;
            }
        }
    }



    int c1;
    if (a > b)
        c1 = a;
    else
        c1 = b;
    cout << endl;
    int b4[c1],sum1=0,temp1;

    //to find intersection of set 1 and set 2
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] == arr2[j])
            {
                b4[sum1] = arr1[i];
                sum1++;
            }
        }
    }

    //delete the duplicate element in intersection set
    for (int i = 0; i < c1 - 1; i++)
    {
        for (int j = i + 1; j < c1; j++)
        {
            if (b4[i] == b4[j])
            {
                temp1 = b3[j];
                b4[j] = b4[c1 - 1];
                b4[c1 - 1] = temp1;
                c1--;
                sum1--;
            }
        }
    }


    int sym[c - sum1], sum2 = 0;

    //to find difference set
    for (int i = 0; i < c; i++)
    {
        int s1 = 0;
        for (int j = 0; j < sum1; j++)
        {
            if (b3[i] == b4[j])
            {
                s1 = 1;
                break;
            }
        }
        if (s1 == 0)
            sym[sum2++] = b3[i];
    }

    cout << "Symmetric Difference of two sets: ";
    for (int i = 0; i < sum2; i++)
        cout << sym[i] << " ";

    cout << endl;
}