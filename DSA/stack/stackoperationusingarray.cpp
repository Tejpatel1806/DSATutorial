#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{
    cout<<"ENTER THE SIZE OF STACK: ";
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size];
}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<" ";
    }
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    {
        cout<<"stack overflow";
    }
    else
    {
         st->top++;
         st->s[st->top]=x;
    }
}
int pop(struct stack *st)
{
   int x=-1;
   if(st->top==-1)
   {
       cout<<"stack underflow";
   }
   else
   {
       x=st->s[st->top];
       st->top--;
   }
   return x;
}
int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
    {
        cout<<"invalid index";
    }
    else
    {
    x=st.s[st.top-index+1];
    }
    return x;
}
int isempty(struct stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct stack st)
{
    if(st.top=st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stacktop(struct stack st)
{
    if(isempty(st))
    {
        return st.s[st.top];
    }
    else
    {
        return -1;
    }
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    cout<<pop(&st)<<" ";
    cout<<peek(st,2)<<" ";
    display(st);
}