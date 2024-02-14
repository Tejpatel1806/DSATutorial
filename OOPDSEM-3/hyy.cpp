#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    cout << str << endl; 

    int cnt = 0 ;

    for(int i=0; i<=str.length(); i++)
    {
        if( str[i] == '\0' || str[i] == ' ' )
        {
            cnt++;
        }
    }

    // cout<<cnt<<endl;

    char arr[cnt][10000];
    int j = 0 , i1 = 0  ;

    for(int i = 0 ; i<str.length(); i++)
    {

        if((str[i]!='\0') || (str[i]!=' '))
        {        
                arr[j][i1] = str[i];
                i1++;   
        }
        else
        {
            i1=0;
            j++;
        }
    }
    cout<<cnt<<endl;

    for(int j = cnt ; j>=0; j--)
    {
        cout<<arr[j];   
        
        cout<<" ";
    }
    
    cout<<cnt<<endl;
    return 0;
}