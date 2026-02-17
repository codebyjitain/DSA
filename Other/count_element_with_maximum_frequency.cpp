#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int x = 0;
        for(int i = 0;i<nums.size();i++){
            mpp[i]++;
            x = max(x,mpp[i]);
        }

    int ans = 0;
        for(int i = 0;i<mpp.size();i++){
            if(mpp[i] == x ){
                ans+= x;
            }
        }
        return ans;
    }
};

// --> Solved on LeetCode(3005)