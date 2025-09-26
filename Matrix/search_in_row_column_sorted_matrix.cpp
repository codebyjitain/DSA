#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
    bool search(vector<int>& arr,int m,int x){
        int s = 0;
        int e = m-1;
        int mid =  s+ (e-s)/2;
        
        while(s<=e){
            if(arr[mid]> x){
                e = mid-1;
            }
            else if(arr[mid] < x){
                s = mid+1;
            }
            else{
                return true; 
            }
            
            mid =  s+ (e-s)/2;
            
        }
        return false;
    }
    
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++){
            if(mat[i][0] <= x && mat[i][m-1] >= x){
                if(search(mat[i],m,x)){
                    return true;
                }
            }
        }
        
        return false;
        
    }
};

// --> Solved on GFG