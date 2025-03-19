#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};



Node* solve(Node* root,int &k,int node){
    if(root == NULL){
        return NULL;
    }
    
    if(root ->data == node){
        return root;
    }
    
    Node* leftNode = solve(root->left,k,node);
    Node* rightNode = solve(root->right,k,node);
    
    if(leftNode && !rightNode){
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return leftNode;
    }
    else if(!leftNode && rightNode){
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return rightNode;
    }
    return NULL;
    
}
int kthAncestor(Node *root, int k, int node)
{
    Node* x = solve(root,k,node);
    if(x == NULL || x->data == node){
        return -1;
    }
    return x->data;
    
}


