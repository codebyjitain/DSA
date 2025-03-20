#include<bits/stdc++.h>

using namespace std;


//  Definition for a binary tree node.
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

    TreeNode* solve(vector<int> inorder, vector<int> postorder,int &index,int inStart,int inEnd){
        if(index<0 || inStart > inEnd){
            return NULL;
        }

        int element = postorder[index--];
        TreeNode* root = new TreeNode(element);
        int position = findPosition(inorder,element);
        root->right = solve(inorder,postorder,index,position+1,inEnd);
        root->left = solve(inorder,postorder,index,inStart,position-1);
        
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index = postorder.size()-1;
        TreeNode* ans = solve(inorder,postorder,index,0,inorder.size()-1);
        return ans;
    }
};