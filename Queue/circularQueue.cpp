// circular queue
#include <iostream>
using namespace std;

class Cqueue
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    // push
    void push(int val)
    {
        // overflow
        // empty
        // circular
        // normal

        //  bhut glti hoti h yha
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // bhool jaoge bar bar
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    // pop

    void pop()
    {
        // underflow
        // empty/single
        // circular
        // normal
        if ((front == -1 && rear == -1))
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        { // case bhool jate h single element wala
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
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

    Cqueue q(5);
    q.print();

    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.push(60);
    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.push(100);
    q.print();
    q.push(110);
    q.print();
    q.push(120);
    q.print();
    q.push(130);
    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    q.print();

    return 0;
}