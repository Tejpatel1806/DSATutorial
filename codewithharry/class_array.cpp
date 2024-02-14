#include<iostream>
using namespace std;
class class_array
{
private:
    int product_ID[10];
    float product_prices[10];
    int counter;
public:
     void pqr(void)
     {
         counter=0;
     }
     void getiteam(void);
     void display(void);
};

void class_array :: getiteam(void)
{
    cout<<"enter the product_ID  "<<counter+1<<endl;
    cin>>product_ID[counter];
    cout<<"enter the product prices  "<<counter+1<<endl;
    cin>>product_prices[counter];
    counter++;
}
void class_array :: display(void)
{
    for(int i=0;i<counter;i++)
    {
    cout<<"product ID of  "<<i+1  <<"is  "<<product_ID[i]<<endl;
    cout<<"prices of  "<<i+1  <<"is "<<product_prices[i]<<endl;
    }
}

int main()
{
   class_array m;
   m.pqr();
   m.getiteam();
   m.getiteam();
   m.display();
   return 0;
}