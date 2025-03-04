




//  Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//   };















// first way





 
// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root == NULL){
//             return 0;
//         }
//         int left = height(root->left);
//         int right = height(root->right);

//         int ans = max(left,right) +1;

//         return ans;

//     }

//     int solve(TreeNode* root){
//         if(root == NULL){
//             return 0;
//         }

//         int op1 = solve(root->left);
//         int op2 = solve(root->right);
//         int op3 = height(root->left) + 1 + height(root->right);

//         int ans = max(op1,max(op2,op3));

//         return ans;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         int ans = solve(root);
//         return ans-1;
//     }
// };






// second way

// class Solution {
//     pair<int,int> solve(TreeNode* root){
//         if(root == NULL){
//             pair<int,int> p = make_pair(0,0);
//             return p;
//         }

//         pair<int,int> left = solve(root->left);
//         pair<int,int> right = solve(root->right);

//         int op1 = left.first;
//         int op2 = right.first;
//         int op3 = left.second + right.second +1;

//         pair<int,int> ans;
//         ans.first = max(op1,max(op2,op3));
//         ans.second = max(left.second,right.second) +1;
//         return ans;
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         return solve(root).first -1;
//     }
// };
