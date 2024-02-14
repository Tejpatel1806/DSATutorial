#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int o=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                arr[i+1]=o;
                o--;
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
