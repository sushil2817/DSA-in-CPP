// stack use LIFO
// stack me index ka option nhi hota

// #include<iostream>
// #include<stack>

// using namespace std;


// int main(){

//     // creation 
//     stack<int>st;

//     // insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     // size check 

//     cout<<"befor "<<st.size()<<endl;

//     // remove
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();
//     st.pop();

//     cout<<"after "<<st.size()<<endl;

//     // empty
//     st.empty() ;
//     cout<<"after empty "<<st.size()<<endl;
//     cout<<"top empty "<<st.top()<<endl;

//     // top element
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     cout<<"top "<<st.top()<<endl;
//    return 0;
// }


#include<iostream>
using namespace std;

class Stack{

    public:
    int* arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    void push(int data){
        top++;
        arr[top] = data;
    }
    void pop(){
        // underflow
        top--;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    int getTop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }else{
        return arr[top];
        }
    }

    int getSize(){
        return top + 1;
    }


}

int main(){


    return 0;
}