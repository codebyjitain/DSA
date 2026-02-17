#include<bits/stdc++.h>

using namespace std;


class Solution {
    void solve(vector<int>& arr,vector<vector<int>>& ans,int target,vector<int> temp,int i,int n){
        if(i>=n){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }

        if(arr[i] <= target){
        temp.push_back(arr[i]);
        solve(arr,ans,target- arr[i],temp,i,n);
        temp.pop_back();

        }


        solve(arr,ans,target,temp,i+1,n);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,ans,target,temp,0,candidates.size());

        return ans;
    }
};

// --> Solved on LetCode(39)