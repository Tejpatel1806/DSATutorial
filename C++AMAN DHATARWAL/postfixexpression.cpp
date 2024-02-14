#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;
int prefixevulation(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch(s[i])
            {
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s1;
    cin>>s1;
    int p;
   p=prefixevulation(s1);
   cout<<p<<endl;
   return 0;
}