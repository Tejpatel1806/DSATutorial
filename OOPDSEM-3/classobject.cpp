#include<iostream>
using namespace std;
class bankaccount{
    private:
    int accountno;
    char typeac[10];
    char nameaco[20];
    int balance;
    public:
    void read()
    {
        cout<<"Enter the name of depositer:";
        cin>>nameaco;
        cout<<"Enter Type of account:";
        cin>>typeac;
        cout<<"Enter account number:";
        cin>>accountno;
        cout<<"Enter the balance(current):";
        cin>>balance;
    }
    void deposit()
    {
        int x;
        cout<<"how many amount do you want to deposit:";
        cin>>x;
        balance=balance+x;
    }
    void withdrawl(){
        int y;
        cout<<"how many amount do you to withdrawl";
        cin>>y;
        if(y<balance)
        {
            balance=balance-y;
        }
    }
    void display()
    {
        cout<<"Name of the depositer is "<<nameaco<<" and balance is "<<balance;
    }
};
int main()
{
    bankaccount a;
    a.read();
    int x;
    cout<<"if you want to withdrawl then press 1 & if you want to deposit then press 2 & if both then press 3:";
    cin>>x;
    switch(x)
    {
        case 1:
        a.withdrawl();
        break;
        case 2:
        a.deposit();
        break;
        case 3:
        a.deposit();
        a.withdrawl();
    }
    a.display();
    return 0;
}