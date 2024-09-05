#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // check full
        if (rear == size - 1)
        {
            cout << "Queue is full OverFlow" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            // empty case
            front++;
            rear++;
            arr[rear] = data;
        }
        else
        {
            // not full
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // under flow
        if (front == -1 && rear == -1)
        {
            cout << "queue is underflow" << endl;
            return;
        }
        else if (front == rear)
        {
            // last element -> empty case
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            // norml case
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }

    int getSize()
    {
        // bhool jata hu
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        return rear - front + 1;
    }

    int getFront()
    {
        if (front == -1)
        {
            cout << "no element in queue, cannot give front element" << endl;
        }
        return arr[front];
    }

    int getRear()
    {
        if (rear == -1)
        {
            cout << "no element in queue, cannot give rear element" << endl;
        }
        return arr[rear];
    }

    void print()
    {
        cout << "Printing Queue: ";

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    // creation queue
    Queue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();
    cout << "printing queue size: " << q.getSize() << endl;

    q.push(50);
    q.print();

    cout << "printing queue size: " << q.getSize() << endl;

    q.push(60);
    q.print();

    q.pop();
    q.print();
    cout << "printing queue size: " << q.getSize() << endl;

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    cout << "Queue is empty: " << q.isEmpty() << endl;
    q.pop();
    q.print();

    cout << "printing queue size: " << q.getSize() << endl;
    q.pop();
    q.print();
    cout << "printing queue size: " << q.getSize() << endl;
    cout << "Queue is empty: " << q.isEmpty() << endl;

    q.push(12);
    q.push(26);
    q.print();
    cout << "front: " << q.getFront() << endl;
    cout << "rear: " << q.getRear();

    return 0;
}