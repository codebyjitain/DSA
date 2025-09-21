#include <bits/stdc++.h>
using namespace std;


class Solution {
    void dfs(vector<vector<int>>& isConnected,vector<int>& visited,int index){
        if(visited[index] == 1){
            return;
        }

        visited[index] = 1;
    
        for(int j = 0;j<isConnected.size();j++){
            if(visited[j] == 0 && isConnected[index][j] == 1){
                dfs(isConnected,visited,j);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int count = 0;
        vector<int> visited(n,0);
        for(int i = 0;i<n;i++){
            if(visited[i] == 0){
                count++;
                dfs(isConnected,visited,0);
            }
        }

        return count;
    }
};

// --> Solved on LeetCode(547)