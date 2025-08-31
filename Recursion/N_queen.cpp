#include<bits/stdc++.h>

using namespace std;



class Solution {
    bool issafe(int row ,int col, vector<string>& board,int n){
        int x = row;
        int y = col;

        while(row>=0 && col>=0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        row = x;
        col = y;
        while(col >=0 ){
            if(board[row][col] == 'Q') return false;
            col--;
        }

        row = x;
        col = y;
        while(row<n && col>=0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        return true;
    }
 
    void solve(int col,vector<string>& board,vector<vector<string>>& ans,int n){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row = 0;row<n;row++){
            if(issafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1,board,ans,row);
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;    
        vector<string> board(n, string(n, '.'));
        
        solve(0,board,ans,n);
        return ans;
    }
};



// -->Solved on LeetCode(51)



bool ischeck(int row, int col, int n, vector<int>& board) {
    for (int i = 0; i < row; i++) {
        // same column check
        if (board[i] == col) return false;

        // diagonal check
        if (abs(board[i] - col) == abs(i - row)) return false;
    }
    return true;
}

void solve(vector<vector<int>>& ans, int n, int row, vector<int>& board) {
    if (row == n) {
        // ek solution bana lo
        vector<int> tempBoard(n * n, 0);
        for (int r = 0; r < n; r++) {
            tempBoard[r * n + board[r]] = 1; // queen place
        }
        ans.push_back(tempBoard);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (ischeck(row, col, n, board)) {
            board[row] = col;
            solve(ans, n, row + 1, board);
            board[row] = -1; // backtrack
        }
    }
}

vector<vector<int>> nQueens(int n) {
    vector<vector<int>> ans;
    vector<int> board(n, -1); // board[row] = col
    solve(ans, n, 0, board);
    return ans;
}


// --> Solved on Coding Ninjas