#include <iostream>
// #include<deque>
using namespace std;
class Deque
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushFront(int val)
    {
        // overflow
        // single element
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) // bhool jaoge bar bar
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        else if (front == 0 && rear != size - 1)
        {
            front == size - 1;
            arr[front] = val;
        }
        else
        {
            front--;
            arr[front] = val;
        }
    }

    void pushBack(int val)
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

    void popFront()
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
    void popBack()
    {
        // underflow
        // single element
        // normal case
        if ((front == -1 && rear == -1))
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
};

int main()
{

    return 0;
}