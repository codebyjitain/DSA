// Insert An Element At Its Bottom In A Given Stack

#include <bits/stdc++.h>

using namespace std;

void solve(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int element = myStack.top();
    myStack.pop();

    solve(myStack, x);

    myStack.push(element);
}
