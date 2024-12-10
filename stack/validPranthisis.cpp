#include <iostream>
using namespace std;
class Solution
{
public:ko
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{')
            {
                // for open bracket -> just push
                st.push(ch);
            }
            else
            {
                if (!st.empty())
                {
                    if (ch == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (ch == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else if (ch == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        // no match
                        return false;
                    }
                }
                else
                {
                    return false;
                }
                // closing bracket;
            }
        }
        if (st.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    return 0;
}