#include<bits/stdc++.h>

using namespace std;


class Solution {
    // for clockwise
    void reverse(vector<int>& arr){
        int i = 0;
        int j = arr.size()-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i = 0;i<n;i++){
            for(int j = i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0;i<n;i++){
            reverse(matrix[i]);
        }
        
    }
};

// --> Solved on LeetCode(48) and Coding Ninjas(reverse for column for anticlockwise)