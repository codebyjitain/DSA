#include<bits/stdc++.h>
#include "base.h"

using namespace std;

// void preorder(Node* tree){
//     stack<Node*> st;
//     st.push(tree);

//     while (!st.empty())
//     {   
//         Node* temp = st.top();
//         st.pop();
//         cout<<temp->data<<" ";

//         if(temp->right) st.push(temp->right);
//         if(temp->left) st.push(temp->left);
//     }
// }

// void inorder(Node* tree){
//     stack<Node*> st;
//     Node* x = tree;

//     while (true){
//         if(x != NULL){
//             st.push(x);
//             x = x->left;
//         }   
//         else{
//             if(st.empty() == true) break;
//             x = st.top();
//             st.pop();
//             cout<<x->data<<" ";
//             x = x->right;
//         }     
//     }
// }

// void postorder(Node* tree){
//     stack<Node*> st1;
//     stack<Node*> st2;
//     st1.push(tree);
//     while(!st1.empty()){
//         Node* x = st1.top();
//         st1.pop();
//         st2.push(x);

//         Node* temp = st2.top();
//         if(temp->left) st1.push(temp->left);
//         if(temp->right) st1.push(temp->right);
//     }

//     while(!st2.empty()){
//         cout<<st2.top()->data<<" ";
//         st2.pop();
//     }
// }

// void postorder_using_single_stack(Node* tree){
//     stack<Node*> st;
//     Node* curr = tree;
//     while(curr!= NULL || !st.empty()){
//         if(curr != NULL){
//             st.push(curr);
//             curr = curr->left;
//         }
//         else{
//             Node* temp = st.top()->right;
//             if(temp == NULL){
//                 temp = st.top();
//                 st.pop();
//                 cout<<temp->data<<" ";
//                 // while(!st.empty() && temp == st.top()->right){
//                 //     temp = st.top();
//                 //     st.pop();
//                 //     cout<<temp->data<<" ";
//                 // }
//             }
//             else{
//                 curr = temp;
//             }
//         }
//     }
// }

// date -> 08/08/2026 practice

// void pre_order_using_recursion(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     pre_order_using_recursion(root->left);
//     pre_order_using_recursion(root->right);
// }
// void post_order_using_recursion(Node* root){
//     if(root == NULL){
//         return;
//     }

//     post_order_using_recursion(root->left);
//     post_order_using_recursion(root->right);
//     cout<<root->data<<" ";
// }
// void in_order_using_recursion(Node* root){
//     if(root == NULL){
//         return;
//     }

//     in_order_using_recursion(root->left);
//     cout<<root->data<<" ";
//     in_order_using_recursion(root->right);
// }


void pre_order_using_loops(Node* root){
    stack<Node*> st;
    st.push(root);

    while (!st.empty())
    {
        Node* temp = st.top();
        st.pop();
        cout<<temp->data<<" ";

        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    
}
void post_order_using_loops(Node* root){
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);

    while (!st1.empty())
    {
        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);

        if(temp->left) st1.push(temp->left);
        if(temp->right) st1.push(temp->right);
    }

    while (!st2.empty())
    {
        cout<<st2.top()->data<<" ";
        st2.pop();
    }
    
    
}
void in_order_using_loops(Node* root){
    stack <Node*> st;
    Node*  x = root;

    while (true)    
    {
        if(x != NULL){
            st.push(x);
            x = x->left;
        }
        else{
            if(st.empty()) break;
            x = st.top();
            st.pop();
            cout<<x->data<<" ";
            x = x->right;
        }
    }
    
}


int main(){
    Node* tree = new Node(10);
    generateTree(tree);

    post_order_using_loops(tree);
    // pre_order_using_loops(tree);
    // in_order_using_loops(tree);

    // pre_order_using_recursion(tree);
    // in_order_using_recursion(tree);
    // post_order_using_recursion(tree);
    // preorder(tree);
    // inorder(tree);
    // postorder(tree);
    // postorder_using_single_stack(tree);

    return 0;
}