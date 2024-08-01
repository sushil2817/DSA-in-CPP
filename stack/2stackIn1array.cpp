#include<iostream>
// #include<stack>
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

    void push1(int data){
        if(top2 - top1 == 1){
            // no space avaliable
            cout<<"Stack1 is overflow"<<endl;
        }else{
            top2++;
            arr[top1] = data;
        }
    }

    void push2(int data){
        if(top2 - top1 == 1){
            cout<<"Stack2 is overflow"<<endl;
        }
            top2--;
            arr[top2] = data;
    }

    void pop1(){
        if(top1 == -1){
            cout<<endl;
            cout<<"stack1 is underflow"<<endl;
        }else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            cout<<endl;
            cout<<"stack2 is underflow"<<endl;
        }else{
            arr[top2] = 0;
            top2++;
        }
    }


    void print(){
        cout<<endl;
        cout<<"Top1: "<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        
        for (int  i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }


};


int main()
{
    
    Stack st(6);
    // st.print();

  st.push1(10);
  st.push1(20);
  st.push1(30);
//   st.push1(40);
//   st.print();
    
    st.pop2();
    // st.pop2(200);
    // st.pop2(300);
    // st.pop2(400);

    st.print();
    
return 0;
}