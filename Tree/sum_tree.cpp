#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* left, * right;
};


class Solution {
    int sum(Node* root,bool &ans){
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return root->data;
        }
        
        
        int left = sum(root->left,ans);
        int right = sum(root->right,ans);
        int x = root->data;
        
        if(x != left + right){
            ans = false;
        }
        
        return x+left + right;
        
    }
  public:
    bool isSumTree(Node* root) {
        bool ans = true;
        sum(root,ans);
        return ans;
    }
};