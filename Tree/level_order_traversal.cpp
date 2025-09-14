#include<bits/stdc++.h>
#include "base.h"

using namespace std;

void level(Node* tree){
    queue<Node*> q;
    q.push(tree);

     while (!q.empty()) {
        int size = q.size(); // number of nodes at this level

        for (int i = 0; i < size; i++) {
            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << endl; // new line after each level
    }
    
}

int main(){
    struct Node* tree = new Node(10);
    generateTree(tree);

    level(tree);
    return 0;
}