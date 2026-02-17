#include <bits/stdc++.h>
#include "base.h"
using namespace std;

void solve(vector<int>& pre,vector<int> & in,vector<int>& post , Node* tree){
    stack<pair<Node*,int>> st;
    
    st.push({tree,1});

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left !=NULL){
                st.push({it.first->left,1});
            }
        }
        else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            
            
            if(it.first->right){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
            
        }
    }
}

int main() {
    Node* tree = new Node(10);
    generateTree(tree);
    vector<int> pre;
    vector<int> in;
    vector<int> post;

    solve(pre,in,post,tree);

    print(pre);
    cout<<endl;
    print(in);
    cout<<endl;
    print(post);

    return 0;
}

