#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int size = nums.size()-1;
        while(j<=size){
            if(nums[i] == 0){
                if(nums[j] == 0){
                    j++;
                }
                else{
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                }
            }
            else{
                i++;
                j++;
            }
        }

    }
};

// Solved on LeetCode