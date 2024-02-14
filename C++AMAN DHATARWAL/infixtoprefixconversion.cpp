#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int precendance(char a)
{
    if(a=='^')
    {
        return 3;
    }
    else if(a=='*'||a=='/')
    {
        return 2;
    }
    else if(a=='+'||a=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtoprefix(string s)
{
    reverse(s.begin(),s.end());
    string res;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            res=res+s[i];
        }
        else if(s[i]==')')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            while(!st.empty()&&st.top()!=')')
            {
                res=res+st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty()&&precendance(st.top())>precendance(s[i]))
            {
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res=res+st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    string s1;
    cin>>s1;
    cout<<infixtoprefix(s1);
    //cout<<s2<<endl;
    return 0;
}