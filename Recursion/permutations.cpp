#include<bits/stdc++.h>

using namespace std;



class Solution {
    void solve(vector<int> arr,vector<vector<int>>& ans,int n,vector<int> temp,bool flag[]){
        if(temp.size() == n){
            ans.push_back(temp);
            return;
        }

        for(int i = 0;i<arr.size();i++){
            if(!flag[i]){
                temp.push_back(arr[i]);
                flag[i] = true;
                solve(arr,ans,n,temp,flag);
                temp.pop_back();
                flag[i] = false;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int size = nums.size();
        bool flag[6] = {0};
        solve(nums,ans,size,temp,flag);

        return ans;
    }
};


// --> Solved on LeetCode(46)

class Solution {
    void solve(vector<int> arr,vector<vector<int>>& ans,int index,int n){
        if(index >= n){
            ans.push_back(arr);
            return;
        }

        for(int i = index;i<arr.size();i++){
            swap(arr[i],arr[index]);
            solve(arr,ans,index+1,n);
            swap(arr[i],arr[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,ans,0,nums.size());
        return ans;      
    }
};

// --> Better Approach for it