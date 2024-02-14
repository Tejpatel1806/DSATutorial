#include <iostream>
#include<stdlib.h>
using namespace std;
void intersection(int n, int m, int a[], int b[])//Defination for intersection function
{
    int temp, f[100], g = 0;//Array for storing the intersection number
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                f[g] = a[i];
                g++;
            }
        }
    }
    cout << "INTERSECTION::" << endl;
   if(g==0)
   {
       cout<<"{"<<"}";
       exit(0);
   }

    cout<<"{";
    for (int i = 0; i < g; i++)
    {
        if (f[i] != f[i + 1])
            cout << f[i] << " ";
    }
    cout<<"}";
}
void unionset(int n1,int n2,int arr1[],int arr2[])
{
    int arr3[20];
    int k=0;
    for(int j=0;j<n1;j++)
    {
        arr3[k]=arr1[j];//assign the all element of array1 into array3;
        k++;
    }
    int count=1;
    for(int i=0;i<n2;i++)
    {
        count=1;
        for(int j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                count=0;
                break;
            }
        }
        if(count==1)
        {
        arr3[k]=arr2[i];
        k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(arr3[i]==arr3[j])
            {
                arr3[j]=0;
            }
        }
    }
    for(int j=0;j<k;j++)
    {
        if(arr3[j]!=0)
        {
        cout<<arr3[j]<<" ";
        }
    }
}
int main()
{
    int a[100], b[100];

    int n, m;

    cout << "ENTER NUMBER OF ELEMENTS IN 1 " << endl;
    cin >> n ;
    cout << "ENTER NUMBER OF ELEMENTS IN 2 " << endl;
    cin >> m ;
    cout << "Enter Elements of set 1" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Elements of set 2" << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout<<"PRESS 1 FOR INTERSECTION:"<<endl;
    cout<<"PRESS 2 FOR UNION:"<<endl;
    int choice;
    cin>>choice;
    if(choice==1)
    {
    intersection(n, m, a, b);//call of intersection
    }//FUNCTION CALL
    else if(choice==2)
    {
    unionset(n,m,a,b);//call of union
    }
    else
    {   //if user enter another no than it will print
    cout<<"INVALID CHOICE::"<<endl;
    cout<<"TRY AGAIN.."<<endl;
    }
}