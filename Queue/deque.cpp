#include<iostream>
// #include<deque>
using namespace std;

class Deque{
    public:

    int * arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushFront(int val){
        if((front == 0 && rear == size-1) || rear == front -1){
        // overflow
            cout<<"Queue OverFlow"<<endl;
        }else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[front] = val;
        }else if(front == 0 && rear != size-1 ){
            front = size-1;
            arr[front] = val;
        }else{
            front-- ;
            arr[front] = val;
        }
    }

    void pusBack(int data){
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

    void popFront(){
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

    void popBack(){
        // underflow
        // element
        //normal flow
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }else if(front == rear){
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }else if(rear == 0){
            arr[rear] = -1;
            rear = size -1;
        }
        else{
            arr[rear] = -1;;
            rear--;
        }
    }


};

int main(){

    // deque<int>dq;

    // dq.push_back(10);
    // dq.push_front(20);
    // dq.pop_front ();
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    // cout<<dq.size()<<endl;

return 0;
}