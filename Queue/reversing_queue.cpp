
#include <bits/stdc++.h> 

using namespace std;

// Approach 1
void reverse(queue < int > & q) {
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

// Approach 2
void reverse(queue < int > & q) {
    if(q.empty()){
        return;
    }
    int x = q.front();
    q.pop();

    reverse(q);
    q.push(x);

}