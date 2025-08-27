#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int k = nums.size()-1;

        while(j<=k){
            if(nums[j] == 0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j] == 1){
                j++;
            }
            else{
                swap(nums[j],nums[k]);
                k--;
            }
        }
    }
};



// --> Solved on LeetCode(75) --> Sort Colors
// --> Solved on Coding Ninjas --> Sort An Array of 0s, 1s and 2s

// This Algo is Known as Dutch National Flag Algo.