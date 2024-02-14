//Aim:- Implement the Polynomial representation using a Array.
#include <iostream>
using namespace std;

struct poly
{
    int coeff;
    int expo;
};

int add(poly p1[10], poly p2[10], poly p3[10], int t1, int t2);
int mul(poly p1[10], poly p2[10], poly p3[10], int t1, int t2);
void display(poly p1[10], int t);

int main()
{
    poly p1[10], p2[10], p3[10];
    int t1, t2, t3;
    cout << "Enter the size of polynomials : ";
    cin >> t1 >> t2;
    int i = 0, j = t1;
    while (j--)
    {
        cout << "Enter coefficient : ";
        cin >> p1[i].coeff;
        cout << "Enter exponent : ";
        cin >> p1[i].expo;
        i++;
    }
    display(p1, t1);
    j = t2;
    i = 0;
    while (j--)
    {
        cout << "Enter coefficient : ";
        cin >> p2[i].coeff;
        cout << "Enter exponent : ";
        cin >> p2[i].expo;
        i++;
    }
    display(p2, t2);
    t3 = add(p1, p2, p3, t1, t2);
    return 0;
}

int mul(poly p1[10], poly p2[10], poly p3[10], int n1, int n2)
{
    int i, j, k, next3, flag;
    int ex, co;
    i = next3 = 0;
    while (i < n1)
    {
        j = 0;
        while (j < n2)
        {

            ex = p1[i].expo + p2[j].expo;
            co = p1[i].coeff * p2[j].coeff;
            k = flag = 0;

            while (k < next3 && !flag)
            {
                if (p3[k].expo == ex)
                {
                    flag = 1;
                    break;
                }
                else
                    k++;
            }
            if (flag == 1)
                p3[k].coeff = p3[k].coeff + co;

            else
            {
                p3[next3].expo = ex;
                p3[next3].coeff = co;
                next3++;
            }
            j++;
        }
        i++;
    }
    display(p3, next3);
    return next3;
}

int add(poly p1[10], poly p2[10], poly p3[10], int t1, int t2)
{
    int i, j, k, t3;
    i = j = k = 0;
    while (i < t1 && j < t2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
            k++;
        }
        else if (p1[i].expo > p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        else
        {
            cout << p2[j].expo << " " << p1[i].expo << '\n';
            p3[k].coeff = p2[j].coeff;
            p3[k].expo = p2[j].expo;
            j++;
            k++;
        }
    }
    t3 = k;
    i = 0;
    display(p3, t3);
    return t3;
}

void display(poly p[10], int t)
{
    int i = 0;
    while (t--)
    {
        cout << p[i].coeff << "^" << p[i].expo << " + ";
        i++;
    }
    cout << endl;
}
