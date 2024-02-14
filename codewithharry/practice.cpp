#include<iostream>
#include<string.h>
using namespace std;
class library
{
    char book_name[3][50];
    public:
    void getdata()
    {
        for(int i=0;i<3;i++)
        {
            cin>>book_name[i];
        }
    }
    int search(char a[])
    {
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(strcmp(a,book_name[i])==0)
            {
                count=1;
                return (i+1);
            }
        }
        if(count==0)
        {
              return -1;
        }

    }
};
    int main()
    {
        library c1;
        c1.getdata();
        char s[20];
        cout<<"enter the book_name do you search:"<<endl;
        cin>>s;
        int p=c1.search(s);
        printf("%d",p);
        return 0;
    }
