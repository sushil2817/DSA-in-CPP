// #include<iostream>
// #include<stack>
// using namespace std;

// void insertAtBottom(stack<int>&st,int &element){
//     // base case
//     if(st.empty()){
//         st.push(element);
//         return;
//     }
//     // ek case me solve krunga
//     int temp = st.top();
//     st.pop();

//     // baki recursion dekh lega
//     insertAtBottom(st,element);
//     // backtrack
//     st.push(temp);
// }

// int main()
// {
//     stack<int>st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     int element = 400;

// p    while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }

// return 0;
// }

// revision it again

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int &element)
{
    // base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    // 1 case main solve krunga

    int temp = st.top();
    st.pop();

    // baki recursion dekh lega
    insertAtBottom(st, element);

    // backTrack
    st.push(temp);
}
int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 400; 

    insertAtBottom(st, element);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}