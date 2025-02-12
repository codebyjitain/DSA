#include <bits/stdc++.h> 

using namespace std;

// sorting while insert in stack
void sortInsert(stack<int> &stack,int element){
	if((!stack.empty() && element>stack.top())|| stack.empty()){
		stack.push(element);
		return;
	}

	int x = stack.top();
	stack.pop();

	sortInsert(stack,element);

	stack.push(x);
}


void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int element = stack.top();
	stack.pop();

	sortStack(stack);

	sortInsert(stack,element);

}