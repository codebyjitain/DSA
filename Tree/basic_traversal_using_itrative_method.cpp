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
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(tree);
    while(!st1.empty()){
        Node* x = st1.top();
        st1.pop();
        st2.push(x);

        Node* temp = st2.top();
        if(temp->left) st1.push(temp->left);
        if(temp->right) st1.push(temp->right);
    }

    while(!st2.empty()){
        cout<<st2.top()->data<<" ";
        st2.pop();
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