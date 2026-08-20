#include<bits/stdc++.h>

using namespace std;

// space o(n)
void insert(stack<int> & st,int data,int &getmin){
    if(!st.empty()){
        if(data < getmin){
            int newValue = 2* data - getmin;
            st.push(newValue);
            getmin = data;
        }
        else{
            st.push(data);
        }
    }
    else{
        st.push(data);
        getmin = data;
    }
}

void pop(stack<int> & st, int & getmin){
    if(!st.empty()){
        if(st.top() < getmin){
            int val = 2 * getmin - st.top();
            st.pop();
            getmin = val;
        }
    }
    else{
        cout<<"UnderFlow";
        return;
    }
}



// space O(2*n)
// void insert(stack<pair<int,int>> &st,int data){
//     pair<int,int> p;
//     p.first = data;
//     if(!st.empty()){
//         if(st.top().second < data){
//             p.second = st.top().second;
//         }
//         else{
//             p.second = data;
//         }
//     }
//     else{
//         p.second = data;
//     }

//     st.push(p);
// }

// int getMin(stack<pair<int,int>> st){
//     return st.top().second;
// }

int main(){
    stack<int> st;
    int getmin = 0;
    insert(st,10,getmin);
    insert(st,18,getmin);
    insert(st,3,getmin);
    insert(st,11,getmin);
    insert(st,5,getmin);
    insert(st,8,getmin);
    insert(st,2,getmin);

    cout<<getmin<<endl;
    
    pop(st,getmin);
    // pop(st,getmin);
    // pop(st,getmin);
    
    cout<<getmin;
    
    return 0;
}