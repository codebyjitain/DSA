#include<bits/stdc++.h>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    int findPosition(vector<int> inorder,int element){
        for(int i = 0;i<inorder.size();i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int> preorder, vector<int> inorder,int &index,int inStart,int inEnd){
        if(index >= preorder.size() || inStart>inEnd){
            return NULL;
        }

        int element = preorder[index++];
        TreeNode* root = new TreeNode(element);
        int position = findPosition(inorder,element);
        root->left = solve(preorder,inorder,index,inStart,position-1);
        root->right = solve(preorder,inorder,index,position+1,inEnd);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        TreeNode* ans = solve(preorder,inorder,index,0,inorder.size()-1);
        return ans;
    }
};