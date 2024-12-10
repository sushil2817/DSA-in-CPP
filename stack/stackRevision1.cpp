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


// -------- stack creation using array ------------ 
// #include<iostream>
// using namespace std;
// // top  = -1;
// // size = 

// class Stack{
//     public:
//         int* arr;
//         int size;
//         int top;

//         Stack(int size){
//             arr = new int[size];
//             this->size = size;
//             this->top = -1;
//         }

//         // element insertion
//         void push(int data){
//             if(top == size-1){
//                 cout<<"stack overflow"<<endl;
//                 // return -1;
//             }else{
//             top++;
//             arr[top] = data;
//             }
//         }
//         // elemnet nikalna
//         void pop(){
//             if(top== -1){
//                 cout<<"stack underflow"<<endl;
//                 return;
//             }else{
//             top--;
//             }
//         }
//         // array is empty
        
//         bool isEmpty(){
//             if(top == -1){
//                 return true;
//             }else{
//                 return false;
//             }
//         }
//         //  top element 
//         int getTop(){
//             if(top == -1){
//                 cout<<"Stack is empty "<<endl;
//                 return -1;
//             }else{
//             return arr[top];
//             }
//         }

//         // stack size
//         int getSize(){
//             return top+1;
//         }

//         void print(){
//             cout<<"top: "<<top<<endl;
//             cout<<"top element: "<<getTop()<<endl;
//             cout<<"Stack: ";
//             for(int i=0;i<getSize();i++){
//                 cout<<arr[i]<<" ";
//             }
//                 cout<<endl<<endl;
//         }
// };

// int main()
// {
//     // creation
//     Stack st(8);

//     // push
//     st.push(10);
//     st.print();
//     st.push(20);
//     st.print();
//     st.push(30);
//     st.print();
//     st.push(40);
//     st.print();
//     st.push(50);
//     st.print();

//     // pop

//     st.pop();
//     st.print();
    
//     st.pop();
//     st.print();

//     st.pop();
//     st.print();
    
//     st.pop();
//     st.print();

//     st.pop();
//     st.print();
// return 0;
// }


//  2stack in single array

#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;


    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // function
    void push1(int data){
         if(top2-top1 == 1){
            // space not avaliable
            cout<<"Overflow"<<endl;
         }
         else{
            top1++;
            arr[top1] = data;
         }
    }

    void pop1(){
        if(top1 == -1){
            cout<<"UnderFlow in stack 1"<<endl;
        }else{
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int data){
        if (top2 - top1 == 1){
            // space not avaliable
            cout<<"OverFlow"<<endl;
        }else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2 == size){
            cout<<"underflow in stack 2"<<endl;
        }else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){
        cout<<endl;
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    Stack s(10);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    s.push2(130);
    s.print();
    s.push2(140);
    s.print();

    s.pop1();
    s.print();
    s.pop1();
    s.print();

    s.pop2();
    s.print();
    s.pop2();
    s.print();





    
    
    
return 0;
}