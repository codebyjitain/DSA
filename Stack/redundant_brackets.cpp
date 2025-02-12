#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    bool ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else
        {
            if (s[i] == ')')
            {
                ans = true;
                while (st.top() != '(')
                {
                    if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    {
                        ans = false;
                    }
                    st.pop();
                }
                if (ans == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
