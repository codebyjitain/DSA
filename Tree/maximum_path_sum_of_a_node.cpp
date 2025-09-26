#include <bits/stdc++.h>
using namespace std;

// User Fuction template for C++

// Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
    private:
    int solve(Node * root,int &ans){
        if(root == NULL){
            return 0;
        }
        
        int l = max(0,solve(root->left,ans));
        int r = max(0,solve(root->right,ans));
        
        ans = max(ans,l+r +root->data);
        
        
        return max(l,r) + root->data;
    }
  public:
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) {
    int ans = INT_MIN;
    solve(root,ans);
    
    return ans;
    
        
    }
};

// --> Solve on GFG