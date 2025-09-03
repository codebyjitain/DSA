#include<bits/stdc++.h>

using namespace std;

class Solution {
    void solve(vector<string>& ans,string number,int index,int n){
        if(index >= n){
            ans.push_back(number);
            return;
        }

        for(int i = index;i<n;i++){
            swap(number[i],number[index]);
            solve(ans,number,index+1,n);
            swap(number[i],number[index]);
        }
    }
public:
    string getPermutation(int n, int k) {
        int x = 0;
        for(int i = 1;i<=n;i++){
            x = x * 10 + i;
        }
        string number = to_string(x);
        vector<string> ans;
        solve(ans,number,0,n);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};

// --> Solved on LeetCode(60) but may generate runtime error in long test cases because it did not optimize
