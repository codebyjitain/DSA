#include<bits/stdc++.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        vector<vector<int>> verticalTraversal(TreeNode* root) {
            map<int,map<int,vector<int> > > nodes;
            queue<pair<TreeNode *,pair<int,int> > > q;
            vector<vector<int > > ans;
            vector<int> x;
    
            if(root == NULL){
                return ans;
            }
    
            q.push(make_pair(root,make_pair(0,0)));
    
            while(!q.empty()){
                pair<TreeNode *,pair<int,int> > temp = q.front();
                q.pop();
                TreeNode* frontNode = temp.first;
                int hd = temp.second.first;
                int lvl = temp.second.second;
    
                nodes[hd][lvl].push_back(frontNode->val);
    
                if(frontNode->left !=NULL){
                    q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
                }
    
                if(frontNode->right !=NULL){
                    q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
                }
    
            }
    
            for(auto i: nodes){
                for(auto j : i.second){
                    vector<int> p;
                    for(auto k: j.second){
                        p.push_back(k);
                    }
                    sort(p.begin(),p.end());
                    int n = p.size();
                    for(int i = 0;i<n;i++){
                        x.push_back(p[i]);
                    }
                    while(!p.empty()){
                        p.pop_back();
                    }
                }
                ans.push_back(x);
                    while(!x.empty()){
                        x.pop_back();
                    }
            }
            return ans;
        }
    };
    
    
    
    
    
    
    
    