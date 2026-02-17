#include<bits/stdc++.h>
#include "base.h"

using namespace std;

void preorder(struct Node* tree){
    if(tree == NULL){
        return;
    }

    cout<<tree->data<<" ";
    preorder(tree->left);
    preorder(tree->right);
}

void inorder(struct Node* tree){
    if(tree == NULL){
        return;
    }

    inorder(tree->left);
    cout<<tree->data<<" ";
    inorder(tree->right);

}

void postorder(struct Node* tree){
    if(tree == NULL){
        return;
    }

    postorder(tree->left);
    postorder(tree->right);
    cout<<tree->data<<" ";

}


int main(){
    struct Node* tree =new Node(10);
 generateTree(tree);

    preorder(tree);
    cout<<endl;
    inorder(tree);
    cout<<endl;
    postorder(tree);
    return 0;
}