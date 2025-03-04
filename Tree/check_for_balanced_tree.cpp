/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int diff(TreeNode* root,bool &x){
        if(root == NULL){
            return 0;
        }
        int left = diff(root->left,x);
        int right = diff(root->right,x);
        
        int ans = ((right - left)>0)?(right-left): (left-right);
        if(ans <=1){
            ans = max(left,right) +1;
        }
        else{
            x = false;
        }
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        bool x = true;
        diff(root,x);
        return x;
    }
};