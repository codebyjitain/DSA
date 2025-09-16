#include<bits/stdc++.h>

using namespace std;

class Solution {
    void solve(vector<vector<int>>& adj,vector<int>& ans,queue<int>& q,int index,vector<int>& visited){
        if(visited[index] == 1){
            return;
        }
        
        visited[index] = 1;
        ans.push_back(index);
        
        for(auto x: adj[index]){
            if(visited[x] == 0){
                solve(adj,ans,q,x,visited);
            }
        }
        
      
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int> ans;
        queue<int> q;
        int index = 0;
        int n = adj.size();
        if(n == 0){
            return ans;
        }
        vector<int> visited(n,0);    
        
        
        solve(adj,ans,q,index,visited);
        
        
        return ans;
        
    }
};

// --> Solved on GFG