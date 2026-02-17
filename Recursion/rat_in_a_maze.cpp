#include <bits/stdc++.h> 

using namespace std;

bool check(vector < vector < int >> & arr, int n,vector<vector<int>> visited,int row, int col){
    return (row>=0 && col>=0 && row<n && col<n && visited[row][col] == 0 && arr[row][col] == 1);
}


void solve(vector < vector < int >> & arr, int n, vector<string>& ans,vector<vector<int>> visited,int row, int col,string temp){
    if(row == n-1 && col==n-1){
        ans.push_back(temp);
        return;
    }

    visited[row][col] = 1;

    if(check(arr,n,visited,row+1,col)){
        temp += 'D';
        solve(arr,n,ans,visited,row+1,col,temp);
        temp.pop_back();
    }


    if(check(arr,n,visited,row,col-1)){
        temp += 'L';
        solve(arr,n,ans,visited,row,col-1,temp);
        temp.pop_back();
    }

    if(check(arr,n,visited,row,col+1)){
        temp += 'R';
        solve(arr,n,ans,visited,row,col+1,temp);
        temp.pop_back();
    }

    if(check(arr,n,visited,row-1,col)){
        temp += 'U';
        solve(arr,n,ans,visited,row-1,col,temp);
        temp.pop_back();
    }

    visited[row][col] = 0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    
    vector<string> ans;
    if(arr[0][0] == 0){
        return ans;
    }
    vector<vector<int>> visited(n, vector<int>(n,0));
    string temp;
    solve(arr,n,ans,visited,0,0,temp);
    return ans;
}

// --> SOlved on GFG and Coding Ninjas