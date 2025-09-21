#include <bits/stdc++.h>
using namespace std;



class Solution {
    void dfs(vector<vector<int>>& adj,vector<int>& visited,int index,vector<int>& temp){
        if(visited[index] == 1){
            return;
        }
        
        visited[index] = 1;
        temp.push_back(index);
        
        for(auto x: adj[index]){
            if(visited[x] == 0){
                dfs(adj,visited,x,temp);
            }
        }
    }
  public:
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        
        int n = edges.size();
        for(int i = 0;i<n;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        vector<vector<int>> ans;
        vector<int> visited(V,0);
        
        for(int i = 0;i<n;i++){
            if(visited[i] == 0){
                vector<int> temp;
                dfs(adj,visited,i,temp);
                ans.push_back(temp);
            }
        }
        
        return ans;
        
    }
};


// --> Solved on GFG