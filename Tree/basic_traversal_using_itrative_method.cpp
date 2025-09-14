#include<bits/stdc++.h>
#include "base.h"

using namespace std;

void preorder(Node* tree){
    stack<Node*> st;
    st.push(tree);

    while (!st.empty())
    {   
        Node* temp = st.top();
        st.pop();
        cout<<temp->data<<" ";

        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
}

void inorder(Node* tree){
    stack<Node*> st;
    Node* x = tree;

    while (true){
        if(x != NULL){
            st.push(x);
            x = x->left;
        }   
        else{
            if(st.empty() == true) break;
            x = st.top();
            st.pop();
            cout<<x->data<<" ";
            x = x->right;
        }     
    }
}

void postorder(Node* tree){
    stack<Node*> st;
    Node* x = tree;

    while (true){
        if(x != NULL){
            st.push(x);
            x = x->left;
        }   
        else{
            if(st.empty() == true) break;
            x = st.top();
            st.pop();
            if(x->left == NULL){
                cout<<x->data<<" ";
                x = x->left;
            }
            else{
                st.push(x);
                x = x->right;
            }
        }     
    }
}

int main(){
    Node* tree = new Node(10);
    generateTree(tree);
    // preorder(tree);
    // inorder(tree);
    postorder(tree);

    return 0;
}