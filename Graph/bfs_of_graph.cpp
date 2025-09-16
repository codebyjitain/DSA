#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int> ans;
        int n = adj.size();
        if(n == 0){
            return ans;
        }
        vector<int> visited(n , 0);
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            
            for(auto x : adj[temp]){
                if(visited[x] == 0){
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        return ans;
    }
};

// --> Solved on GFG