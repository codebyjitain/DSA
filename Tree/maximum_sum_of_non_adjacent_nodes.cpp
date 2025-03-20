#include<bits/stdc++.h>

using namespace std;

//Node Structure

struct Node
{
    int data;
    Node* left;
    Node* right;
};


class Solution{
    pair<int,int> solve(Node* root){
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> leftCall = solve(root->left);
        pair<int,int> rightCall = solve(root->right);
        
        pair<int,int> res;
        
        res.first = root->data + leftCall.second + rightCall.second;
        res.second = max(leftCall.first , leftCall.second) + max(rightCall.first ,rightCall.second);
        
        return res;
    }
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        pair<int,int> ans = solve(root);
        return max(ans.first,ans.second);
    }
};

