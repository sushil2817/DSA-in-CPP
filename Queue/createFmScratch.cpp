#include<iostream>
using namespace std;

class Queue{

    public:

    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        // check full
        if(rear == size-1){
            cout<<"Queue OverFlow"<<endl;
            return;
        }else if(front == -1 && rear == -1){
            // empty case
            front++;
            rear++;
            arr[rear] = val;
        }else{
            // normal case
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        // underflow
        if(front == -1 && rear == -1){
            cout<<"Queue underflow"<<endl;
            return;
        }else if(front == rear){
            // empty case -> single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }else{
            return false;
        }
    }

    int getSize(){
        // bhool jata hu
        if(front == -1 && rear == -1){
            return 0;
        }else{
        return rear-front+1;
        }
    }

    int getFront(){
        if(front == -1){
            cout<<"No element in queue, cannot give front element"<<endl;
            return -1;
        }else{
            return arr[front];
        }
        
    }

    int getRear(){
        if(rear == -1){
            cout<<"No element in queue, cannot give rear element"<<endl;
        }else{
            return arr[rear];
        }
    }

    void print(){
        cout<<"Printing Queue: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    //creation
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
    q.push(50);
    q.print();
    
    cout<<"Size of Queue "<<q.getSize()<<endl;

    q.pop();
    q.print();
    cout<<"Size of Queue "<<q.getSize()<<endl;

    cout<<"Queue is empty or not: "<<q.isEmpty()<<endl;

    q.push(100);
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.push(500);
    q.push(600);
    q.print();

    cout<<"Rear element: "<<q.getRear()<<endl;
    cout<<"Front element: "<<q.getFront()<<endl;


return 0;
}