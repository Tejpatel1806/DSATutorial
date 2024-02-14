 #include<iostream>
using namespace std;
int main()
{
cout<<"press 1 for add"<<endl;
cout<<"press 2 for odd even"<<endl;
cout<<"press 3 for natural no"<<endl;
int choice ;
cin>>choice;
switch(choice)
{
case 1:
int a,b;
cin>>a>>b;
int res;
res=a+b;
cout<<a+b;
break;
case 2:
int c;
cin>>c;
if(c%2==0)
{
cout<<"even";
}
else
cout<<"odd";
break;
case 3:
    int d;
    cin>>d;
    for(int i=1;i<=d;i++)
    {
        cout<<i;
    }
    break;

}
return 0;
}