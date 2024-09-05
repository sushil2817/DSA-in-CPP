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

    void push(int data)
    {
        // line no 23 ,e galti hoti hai 
        if((front == 0 && rear == size-1) || rear == front -1){
        // overflow
            cout<<"Queue OverFlow"<<endl;
        }else if(front == -1 && rear ==-1){
        // emptycase
            front++;
            rear++;
            arr[front] = data;
        }else if(rear == size-1 && front != 0){
        // circular
            rear = 0;
            arr[rear] = data;
        }else {
        // normal case
            rear++;
            arr[rear] = data;
        }

    }

    void pop()
    {
        // underflow
        // sigle element
        // circular
        // normal case
        if(rear == -1 && front == -1){
            cout<<"Queue Underflow"<<endl;
        }else if(front == rear ){
            // case hi bhool jate hai
            arr[front] = -1;
            front = -1;
            rear = -1;
        }else if(front == size -1){
            arr[front] = -1;
            front = 0;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty()
    {
       
    }

    int getSize()
    {
      
    }

    int getFront()
    {
        
    }

    int getRear()
    {
       
    }

    void print()
    {
    //     cout<<"Front: "<<front<<endl;
    //     cout<<"Rear: "<<rear<<endl;
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
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.print();

    return 0;
}