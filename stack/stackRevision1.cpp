// lifo me simmilar type ke data type hote hai
// last in first out ordering follow krta hai
// ek type ka data structure hi jo data store krta hai


// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     // stack creation
//     stack<int>st;
//     // stack push element
//     st.push(10);
//     st.push(20);
//     st.push(30);
    
//     // top element of stack
//     cout<<"before pop: "<<st.top()<<endl;
//     cout<<"before pop: "<<st.size()<<endl;
//     // top element nikalna
//     st.pop();
//     cout<<"after pop: "<<st.top()<<endl;
//     cout<<"after pop: "<<st.size()<<endl;
//     // empty stack
//     if(st.empty()){
//         cout<<"empty"<<endl;
//     }else{
//         cout<<"not empty"<<endl;
//     }
// return 0;
// }


// stack creation using array

#include<iostream>
using namespace std;
// top  = -1;
// size = 

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

        // element insertion
        void push(int data){
            if(top == size-1){
                cout<<"stack overflow"<<endl;
                // return -1;
            }else{
            top++;
            arr[top] = data;
            }
        }
        // elemnet nikalna
        void pop(){
            if(top== -1){
                cout<<"stack underflow"<<endl;
                return;
            }else{
            top--;
            }
        }
        // array is empty
        
        bool isEmpty(){
            if(top == -1){
                return true;
            }else{
                return false;
            }
        }
        //  top element 
        int getTop(){
            if(top == -1){
                cout<<"Stack is empty "<<endl;
                return -1;
            }else{
            return arr[top];
            }
        }

        // stack size
        int getSize(){
            return top+1;
        }

        void print(){
            cout<<"top: "<<top<<endl;
            cout<<"top element: "<<getTop()<<endl;
            cout<<"Stack: ";
            for(int i=0;i<getSize();i++){
                cout<<arr[i]<<" ";
            }
                cout<<endl<<endl;
        }
};

int main()
{
    // creation
    Stack st(8);

    // push
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();
    st.push(40);
    st.print();
    st.push(50);
    st.print();

    // pop

    st.pop();
    st.print();
    
    st.pop();
    st.print();

    st.pop();
    st.print();
    
    st.pop();
    st.print();

    st.pop();
    st.print();

    
    
    
    
return 0;
}