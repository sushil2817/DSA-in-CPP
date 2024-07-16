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

// #include<iostream>
// using namespace std;

// class Stack{

//     public:
//     int* arr;
//     int size;
//     int top;

//     Stack(int size){
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }
//     void push(int data){
//         top++;
//         arr[top] = data;
//     }
//     void pop(){
//         // underflow
//         top--;
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     int getTop(){
//         if(top == -1){
//             cout<<"Stack is empty"<<endl;
//         }else{
//         return arr[top];
//         }
//     }

//     int getSize(){
//         return top + 1;
//     }

// }

// int main(){

//     return 0;
// }

// #include <iostream>
// #include <stack>

// using namespace std;
// int main()
// {

//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     cout << "size of st " << st.size() << endl;
//     cout << st.top() << endl;
//     cout << st.empty() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Stack
// {

// public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }

//     void push(int data)
//     {
//         if(top == size-1){
//             cout<<"stack overflow"<<endl;
//         }
//         else{
//            top++;
//            arr[top] = data;
//         }
//     }

//     void pop()
//     {
//         if(top ==-1){
//             cout<<"stack under flow"<<endl; 
//         }
//         else{
//           top--;
//         }
//     }

//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }else{
//             return false;
//         }
//     }
//     int getTop(){
//         if(top == -1){
//             cout<<"stack is empty"<<endl;
//              return -1;
//         }else{
//         return arr[top];
//         }
//     }

//     int getSize(){
//         return top+1;
//     }

//     void printStack(){
//         cout<<"Top: "<<top<<endl;
//         cout<<"Top element: "<<getTop()<<endl;
//         cout<<"Stack: ";
//         for(int i=0;i<getSize();i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl<<endl;
//     }
// };

// int main()
// {
//       Stack st(8);
//       st.push(10);
//       st.printStack();
//       st.push(20);
//       st.printStack();
//       st.push(30);
//       st.printStack();
//       st.push(40);
//       st.printStack();

//       st.pop();
//       st.printStack();
//       st.pop();
//       st.printStack();
//       st.pop();
//       st.printStack();
//       st.pop();
//       st.printStack();

//     return 0;
// }


// stack me indexka option nhi hota aapko last stack hi nikalna hoga

// stack use Lifo

// #include<iostream>
// using namespace std;
// class Stack{

//     public:
//     int* arr;
//     int size;
//     int top;

//     Stack (int size){
//         arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }

//     void push(int data){
//         if(top == size-1){
//             cout<<"Stack overflow"<<endl;
//         }else{
//             top++;
//             arr[top] = data;
//         }
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"Stack underflow"<<endl;
//         }
//         else{
//         top--;
//         }
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     int getTop(){
//         if(top == -1){
//             cout<<"Stack is empty"<<endl;
//         }else{
//             return arr[top];
//         }
//     }

//     int getSize(){
//         return top+1;
//     }

//     void print(){
//         cout<<"top: "<<top<<endl;
//         cout<<"Top Element: "<<getTop()<<endl;
//         cout<<"Stack: ";
//         for(int i=0;i<getSize();i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         cout<<endl;
//     }
// };

// int main()
// {

//     Creation
//     Stack st(8);
    
//     st.push(10);
//     st.print();
//     st.push(20);
//     st.print();
//     st.push(30);
//     st.print();
//     st.push(40);
//     st.print();
//     st.push(50);
//     st.push(60);
//     st.push(70);
//     st.push(80);
//     st.print();


// return 0;
// }


// reverse number of items
// eg: sushil = lihsus
//  stack ka mtlab recursion
// recurstion mtlb stack

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str = "sushil";
    stack<char>st;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        st.push(ch);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}