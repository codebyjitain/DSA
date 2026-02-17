#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++) {
            x[nums[i]]++;
        }
        for (auto it : x) {
            if (it.second == 1) {
                return it.first;
            }
            
        }
        return -1;
    }
};

// --> Solved on LeetCode(137) try for better