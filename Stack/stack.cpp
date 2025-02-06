#include<bits/stdc++.h>

using namespace std;

int main(){
    // create a stack
    stack<int> s;

    // push element in stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // pop top most element
    s.pop();

    // print top most element
    cout<<s.top()<<endl;

    // checking stack is empty or not
    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    // checking size of stack
    cout<<s.size()<<endl;
    return 0;
}