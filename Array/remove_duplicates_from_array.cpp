#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int ans = 0;
        while(j<nums.size()){
            
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
            else{
                ans++;
            }
            j++;
        }
        
        return nums.size()-ans;
    }
};

// --> solved on leetcode