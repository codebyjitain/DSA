#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void generateTree(struct Node* &tree){
    tree->left = new Node(20);
    tree->right = new Node(30);
    tree->left->left = new Node(40);
    tree->left->right = new Node(50);
    tree->right->left = new Node(60);
    tree->right->right = new Node(70);
}

