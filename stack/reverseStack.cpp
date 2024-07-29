#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int &element){
    // base case
    if(st.empty()){
        st.push(element);
        return;
    }

    // 1 case main solve krunga

    int temp = st.top();
    st.pop();

    // baki recursion dekh lega
    insertAtBottom(st,element);

    // backTrack
    st.push(temp);
}

void reverseStack(stack<int> &st){

    if(st.empty()){
        return;
    }
    // 1 case me solve krega
    int temp = st.top();
    st.pop();
    // recursion
    reverseStack(st);
    
    // backtrack
    insertAtBottom(st,temp);
}
int main()
{
    stack<int>st;

    st.push(10);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<"Befor"<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    reverseStack(st);
    cout<<"after"<<endl;
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    
return 0;
}