#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
       if(mat.empty() || mat[0].empty()) return false;
       int n  = mat.size();
       int m = mat[0].size();
       
       int size = (n*m);
       
       int s = 0;
       int e = size-1;
       
       while(s<=e){
           int mid = s+(e-s)/2;
           int i = mid/m;
           int j = mid%m;
           
           if(mat[i][j] > x){
               e = mid-1;
           }
           else if(mat[i][j]<x){
               s = mid+1;
           }
           else{
               return true;
           }
       }
       return false;
        
    }
};

// -->Solved on GFG