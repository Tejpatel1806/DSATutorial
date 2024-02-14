#include<iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"QUEUE IS FULL";
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *r)
{
   int x=-1;
   if(r->front==r->rear)
   {
       cout<<"Queue is empty";
   }
   else
   {
       r->front++;
       x=r->Q[r->front];
   }
   return x;
}
void create(struct Queue*q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=new int[q->size];
}
void display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.rear;i++)
    {
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    cout<<dequeue(&q)<<" ";
    return 0;
}