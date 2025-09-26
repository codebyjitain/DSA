#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
   public:
    bool isIdentical(Node* r1, Node* r2) {
        stack<Node*> st1;
        stack<Node*> st2;
        
        st1.push(r1);
        st2.push(r2);
        
        while(!st1.empty()){
            Node* temp1 = st1.top();
            Node* temp2 = st2.top();
            st1.pop();
            st2.pop();
            
            if(temp1->data == temp2->data){
                if(temp1->left) st1.push(temp1->left);
                if(temp1->right) st1.push(temp1->right);
                if(temp2->left) st2.push(temp2->left);
                if(temp2->right) st2.push(temp2->right);
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};

// --> Solved on GFG