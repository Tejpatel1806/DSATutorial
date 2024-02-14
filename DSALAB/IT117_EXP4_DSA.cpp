// Aim:- Implement the Polynomial representation using a Link -List.
#include <iostream>
using namespace std;


struct node{

    int coeff;
    int exp;
    node* next;
} ;
class impl{
private:
    struct node *p ;

public:
    impl(){
        p = NULL;
    }


    void insertAtEnd(int c, int e)
    {
        node* temp = p;
        if (temp == NULL){
            temp = new node;
            p = temp;
        }
        else{
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new node;
            temp = temp->next;
        }
        temp->coeff = c;
        temp->exp = e;
        temp->next = NULL;
    }


    void display(){
        node* temp = p;
        int f = 0;

        while (temp != NULL)
        {
            if (f != 0)
            {
                if (temp->coeff > 0)
                    cout << " + ";
                else
                    cout << " ";
            }
            if (temp->exp != 0)
                cout << temp->coeff << "x^" << temp->exp;
            else
                cout << temp->coeff;
            temp = temp->next;
            f = 1;
        }
    }


    void addition(impl& l1, impl& l2){
        node* z;
        if (l1.p == NULL && l2.p == NULL)
            return;
        node *fir, *sec;
        fir = l1.p;
        sec = l2.p;
        while (fir != NULL && sec != NULL){
            if (p == NULL){
                p = new node;
                z = p;
            }
            else{
                z->next = new node;
                z = z->next;
            }
            if (fir->exp < sec->exp){
                z->coeff = sec->coeff;
                z->exp = sec->exp;
                sec = sec->next;
            }
            else{
                if (fir->exp > sec->exp){
                    z->coeff = fir->coeff;
                    z->exp = fir->exp;
                    fir = fir->next;
                }
                else{
                    if (fir->exp == sec->exp){
                        z->coeff = fir->coeff + sec->coeff;
                        z->exp = fir->exp;
                        fir = fir->next;
                        sec = sec->next;
                    }
                }
            }
        }
        while (fir != NULL){
            if (p == NULL){
                p = new node;
                z = p;
            }
            else{
                z->next = new node;
                z = z->next;
            }
            z->coeff = fir->coeff;
            z->exp = fir->exp;
            fir = fir->next;
        }
        while (sec != NULL){
            if (p == NULL){
                p = new node;
                z = p;
            }
            else{
                z->next = new node;
                z = z->next;
            }
            z->coeff = sec->coeff;
            z->exp = sec->exp;
            sec = sec->next;
        }
        z->next = NULL;
    }
};



int main()
{
    impl l1;
    l1.insertAtEnd(3, 3);
    l1.insertAtEnd(2, 2);
    l1.insertAtEnd(1, 1);
    l1.insertAtEnd(5, 0);

    impl l2;
    l2.insertAtEnd(3, 3);
    l2.insertAtEnd(2, 2);
    l2.insertAtEnd(1, 1);
    l2.insertAtEnd(4, 0);

    impl l3;
    l3.addition(l1, l2);

    cout << "First polynomial:  ";
    l1.display();

    cout << endl;

    cout << "Second polynomial:  ";
    l2.display();

    cout << endl;

    cout << "Addition Of Two Polynomial:  ";
    l3.display();

}
