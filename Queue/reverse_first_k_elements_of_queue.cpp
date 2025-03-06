#include<bits/stdc++.h>

using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    queue<int> ans;
    
    int i = 0;
    // first k ement insertion in stack
    while(i<k){
        s.push(q.front());
        q.pop();
        i++;
    }
    
    // poping k elemnet from stack and push in answer queue to get reverse
    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    
    // Now insert Remaining Element of Queue in answer queue
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    
    // return answer
    return ans;
    
}