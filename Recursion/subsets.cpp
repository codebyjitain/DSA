#include<bits/stdc++.h>

using namespace std;


class Solution {
    void solve(vector<int> arr,vector<vector<int>>& ans,int i,int n,vector<int> temp){
        if(i>=n){
            ans.push_back(temp);
            return;
        }

        solve(arr,ans,i+1,n,temp);
        temp.push_back(arr[i]);
        solve(arr,ans,i+1,n,temp);
        temp.pop_back();

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(nums,ans,0,nums.size(),temp);

        return ans;
    }
};


// --> Solved on LeetCode(78)