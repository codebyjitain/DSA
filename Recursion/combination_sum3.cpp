#include<bits/stdc++.h>

using namespace std;


class Solution {
    void solve(vector<int>& arr, vector<vector<int>>& ans, int target, int i,
               vector<int> temp) {

        if (target == 0) {
            
            ans.push_back(temp);
        return;
        }
        for(int index = i;index<arr.size();index++){
            if(index>i && arr[index] == arr[index-1]) continue;
            if(arr[index]>target) break;
            temp.push_back(arr[index]);
            solve(arr, ans, target-arr[index], index + 1, temp);
            temp.pop_back();

        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates, ans, target, 0, temp);

        return ans;
    }
};

// -->Solved on LeetCode(40)