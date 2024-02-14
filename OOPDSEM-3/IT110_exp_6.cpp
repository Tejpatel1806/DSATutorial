#include <iostream>
using namespace std;

//Function Declaration.
int Intersection(int arr1[], int arr2[],int arr3[], int a, int b,int count);
int Union(int arr1[],int arr2[],int arr3[], int a,int b,int c);
int Complement(int arr1[],int arr2[],int arr3[],int a,int b,int c);
void print(int arr1[],int a);

int main()
{
    int a,n,m,c,count;

    //Getting input from the user.
    cout<<"Enter the number of elements of universal set: ";
    cin>>a;
    cout<<"Enter the number of elements of set A: ";
    cin>>m;
    cout<<"Enter the number of elements of set B: ";
    cin>>n;

    if (m > n)
        count = m;
    else
        count = n;

    c=m+n;
    int U[a],arr1[m],arr1C[a-m],arr2[n],arr2C[a-n],arr3[c],arr4[count],arr3C[a-c],arr4C[a-count],arr3CC[a-c],arr4CC[a-count];

    //Getting input from the user.
    cout<<"Enter the elements of universal set: ";
    for(int i=0;i<a;i++)
        cin>>U[i];

    cout<<"Enter the elements of set A: ";
    for(int j=0;j<m;j++)
        cin>>arr1[j];

    cout<<"Enter the elements of set B: ";
    for(int k=0;k<n;k++)
        cin>>arr2[k];
    
    //Calling the functions.
    int h1 = Complement(U,arr1,arr1C,a,m,a-m);
    int h2 = Complement(U,arr2,arr2C,a,n,a-n);
    int l1 = Union(arr1C,arr2C,arr3CC,h1,h2,h1+h2);
    cout<<"\nA' U B': ";
    print(arr3CC,l1);

    int k1 = Intersection(arr1C,arr2C,arr4CC,a-m,a-n,a-count);
    cout<<"A' ^ B': ";
    print(arr4CC,k1);
    
    int l2 = Union(arr1,arr2,arr3,m,n,c);
    int h4 = Complement(U,arr3,arr3C,a,c,l2);
    cout<<"(A U B)': ";
    print(arr3C,h4);

    int k2 = Intersection(arr1,arr2,arr4,m,n,count);
    int h5 = Complement(U,arr4,arr4C,a,count,k2);
    cout<<"(A ^ B)': ";
    print(arr4C,h5);

    cout<<"\n(A U B)' = A' ^ B'"<<endl<<"(A ^ B)' = A' U B'"<<endl;
    cout<<"Hence proved."<<endl;

    return 0;
}


//Function Defination.
int Union(int arr1[],int arr2[],int arr3[],int a,int b,int c)
{
    int temp,i,j;

    //Algorithm to find union.
    for (i = 0; i < a; i++)
        arr3[i] = arr1[i];
    
    for (j = 0; j < b; j++)
        arr3[i + j] = arr2[j];
    

    //Algorithm to delete the duplicate elements.
    for (i = 0; i < c - 1; i++)
    {
        for (j = i + 1; j < c; j++)
        {
            if (arr3[i] == arr3[j])
            {
                temp = arr3[j];
                arr3[j] = arr3[c - 1];
                arr3[c - 1] = temp;
                c--;
            }
        }
    }
    return c;
}


//Function Defination.
int Intersection(int arr1[], int arr2[],int arr3[],int a, int b,int c)
{
    int count=0;
    int temp;

    //Algorithm to find intersection.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[count] = arr1[i];
                count++;
            }
        }
    }

    //Algorithm to delete the duplicate elements.
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (arr3[i] == arr3[j])
            {
                temp = arr3[j];
                arr3[j] = arr3[c - 1];
                arr3[c - 1] = temp;
                c--;
                count--;
            }
        }
    }
    return count;
}

//Function Defination.
int Complement(int arr[],int A[],int arr2[],int n,int m,int o)
{
    o=n-m; 
    int j,count=0;

    //Algorithm to find complement of set.	
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i] == A[j])
            {
                break;
            }
        }
        if (j==m){
	    arr2[count++]=arr[i];
        }
    }
    return count;
}

void print(int arr1[],int a)
{
    for(int i=0;i<a;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;    
}