#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<char> st ;
    string str = "codebybhiru";

    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout<<ans<<endl;
    
    return 0;
}