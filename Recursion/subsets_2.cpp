#include<bits/stdc++.h>

using namespace std;



class Solution {
    void solve(vector<int> arr,vector<vector<int>>& ans,vector<int> temp,int index,int n){
        
            ans.push_back(temp);
            
        

        for(int i = index;i<arr.size();i++){
            if(i!=index && arr[i] == arr[i-1]) continue;
            temp.push_back(arr[i]);
            solve(arr,ans,temp,i+1,n);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(nums.begin(),nums.end());

        solve(nums,ans,temp,0,nums.size());

        return ans;
    }
};


// --> Solved on LeetCode(90)