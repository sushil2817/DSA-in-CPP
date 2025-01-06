#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &st, int element)
{
    // base case
    // jab bhi top access kro tb el ghnti bjni chahiye ki stack empty to hi hai

    if (st.empty() || element > st.top())
    {
        st.push(element);
        return;
    }

    // 1 case solve
    int temp = st.top();
    st.pop();

    // recusion

    insertSorted(st, element);

    // backtracking
    st.push(temp);
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 35;

    insertSorted(st, element);

    while (!st.empty())
    {
        cout << "element: " << st.top() << endl;
        st.pop();
    }

    return 0;
}