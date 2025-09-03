#include<bits/stdc++.h>

using namespace std;

class Solution {
    bool isPalindrome(string s,int start,int end){
        while(start<end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    void solve(string s,vector<vector<string>>& ans,vector<string> path,int index,int n){
        if(index == n){
            ans.push_back(path);
            return;
        }

        for(int i = index;i<n;i++){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i -index +1));
                solve(s,ans,path,i+1,n);
                path.pop_back();
            }
        }

    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        int n = s.length();
        solve(s,ans,path,0,n);
        return ans;
    }
};

// --> Solved on LeetCode(131)