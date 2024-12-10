#include <iostream>
#include<stack>
using namespace std;


void insertSorted(stack<int>& st, int& element){
// base case
// jab bhi top access kro tb el ghnti bjni chahiye ki stack empty to hi hai

if(st.empty() || element > st.top()){
    st.push(element);
    return;
}

// 1 case solve
int temp = st.top();
st.pop();

// recusion

insertSorted(st,element);

// backtracking
st.push(temp);
}

void  sortStack(stack<int>& st){
    // base case
    if(st.empty()){
        return;
    }

    // 1case
    int temp = st.top();
    st.pop();

    // recursion
    sortStack(st);

    // backtracking
    insertSorted(st,temp);
}

int main()
{

    stack<int>st;

    st.push(10);
    st.push(30);
    st.push(20);
    st.push(40);
    st.push(70);
    st.push(60);
    st.push(50);


    sortStack(st);


    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}