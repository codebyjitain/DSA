#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}


class Solution {
    private:
    int solve(Node* root,int &ans){
        if(root == NULL){
            return 0;
        }
        
        int l = solve(root->left,ans);
        int r = solve(root->right,ans);
        
        ans = max(ans,l+r);
        return 1 + max(l,r);
    }
  public:
    int diameter(Node* root) {
        int ans = 0;
        solve(root,ans);
        return ans;
        
    }
};

// --> Solved on GFG