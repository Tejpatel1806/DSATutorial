//Aim:- Make the basic operations of circular Queue.

#include <iostream>

using namespace std;

int MAX = 20;

class queue
{
    int front, rear;
    int size;
    int *arr;

public:
    queue(int n)
    {
        size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    int queueFull()
    {
        if (front == (rear + 1) % size)
            return 1;
        else
            return 0;
    }

    int queueEmpty()
    {
        if (front == -1)
            return 1;
        else
            return 0;
    }

    void enqueue(int n)
    {
        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % size;
        arr[rear] = n;
    }

    void dequeue()
    {
        int n = arr[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
        cout << "deleted data is : " << n;
    }

    void displayQueue()
    {
        cout << "\nElements in Circular Queue are: ";
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else
        {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";

            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
    }
};

int main()
{
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.displayQueue();
    cout << endl;
    q.dequeue();
    q.displayQueue();
    cout << endl;
    q.enqueue(6);
    q.displayQueue();
    cout << endl;
}