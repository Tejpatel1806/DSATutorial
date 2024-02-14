#include <iostream>
using namespace std;
class palindrome
{
public:
    int number;
    palindrome *ptr;
};
void create(palindrome *head)
{
    cin >> (head->number);
    if (head->number != -110)
    {
        palindrome *next;
        next = new palindrome;
        head->ptr = next;
        create(next);
    }
    else
    {
        head->ptr = NULL;
    }
}
void print(palindrome *head)
{
    palindrome *head1 = head;
    while (head1!= NULL)
    {
        cout << (head1->number) << " ";
        head1 = head1->ptr;
    }
}
palindrome *reverse(palindrome *head)
{
    palindrome *prev = NULL;
    palindrome *curr;
    palindrome *next5 = head;
    while (next5 != NULL)
    {
        curr = next5->ptr;
        next5->ptr = prev;
        prev = next5;
        next5 = curr;
    }
    return prev;
}
void lastdelete(palindrome * yuh)
{
    palindrome *yup=yuh;
    while((yup->ptr->ptr)!=NULL)
    {
        yup=yup->ptr;
    }
    delete(yup->ptr);
    yup->ptr=NULL;
}
bool compare(palindrome *&head1, palindrome *&head2)
{
    bool count = 0;
    palindrome *check1 = head1;
    palindrome *check2 = head2;
    while (check1 != NULL)
    {
        if (check1->number == check2->number)
        {
            count = 1;
            check1 = check1->ptr;
            check2 = check2->ptr;
        }
        else
        {
            count = 0;
            return count;
        }
    }

    return count;
}
int main()
{
    palindrome *first;
    first = new palindrome;
    create(first);
    lastdelete(first);
    cout<<"LINKLIST BEFORE REVERSE: ";
    print(first);
    palindrome *reverse1 = reverse(first);
    cout<<endl;
    cout<<"LINKLIST AFTER REVERSE: ";
    print(reverse1);
    int y=compare(first, reverse1);
    cout<<endl;
    if (y==1)
    {
        cout << "LINKLIST IS PALINDROME||" << endl;
    }
    else
    {
        cout << "NOT PALINDROME LINKLIST||" << endl;
    }
    return 0;
} 
