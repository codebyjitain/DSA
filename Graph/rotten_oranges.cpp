#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int vis[n][m];
        queue<pair<pair<int,int> , int>> q;
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mat[i][j]  == 2){
                    q.push({{i,j} , 0});
                    vis[i][j] = 2;
                }
                else {
                    vis[i][j] = 0;
                }
            }
        }
        
        int ans = 0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,-1,0,+1};
        
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            ans = max(ans,t);
            q.pop();
            for(int i = 0;i<4;i++){
                int row = r + drow[i];
                int col = c + dcol[i];
                if(row>=0 && row<n && col>=0 && col<m && mat[row][col] == 1 && vis[row][col] != 2){
                    q.push({{row,col},t+1});
                    vis[row][col] = 2;
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(vis[i][j] !=2 && mat[i][j] ==1){
                    return -1;
                }
            }
        }
        return ans;
    }
};

// --> Solved on GFG