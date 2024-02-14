///assume linklist 1 is 5->4->5->6
//and linklist 2 is 8->9->4
//then answer is 8+5,9+4,5+4,6+0//ane jo carry generate thay to aagad na sum par lai javanu
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void sumlinklist(node *n1, node *n2)
{
    node *j = n1;
    node *u = n2;
    int pos = 0;
    int sum = 0;
    int s, s1;
    vector<int> l;
    while (j != NULL && u != NULL)
    {
        if (pos == 0)
        {
            sum = j->data + u->data;
            if (sum > 9)
            {
                s = sum % 10;
                s1 = sum / 10;
                l.push_back(s);
                pos = 1;
            }
            else
            {
                l.push_back(sum);
                pos = 0;
            }
        }
        else if (pos == 1)
        {
            sum = s1 + j->data + u->data;
            if (sum > 9)
            {
                s = sum % 10;
                s1 = sum / 10;
                l.push_back(s);
                pos = 1;
            }
            else
            {
                l.push_back(sum);
                pos = 0;
            }
        }
        j = j->next;
        u = u->next;
    }
    if (u == NULL && j == NULL)
    {
    }
    else if (u != NULL)
    {
        while (u != NULL)
        {
            l.push_back(u->data);
            u = u->next;
        }
    }
    else if (j != NULL)
    {
        while (j != NULL)
        {
            l.push_back(j->data);
            j = j->next;
        }
    }
}