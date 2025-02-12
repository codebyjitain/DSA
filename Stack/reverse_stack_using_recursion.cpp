#include<bits/stdc++.h>

using namespace std;

void solve(stack<int>& myStack, int x){
    // checking stack is empty or not
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int element = myStack.top();
    myStack.pop();

    solve(myStack,x);

    myStack.push(element);

}


void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }

    int element = stack.top();
    stack.pop();

    reverseStack(stack);

    solve(stack,element);
}