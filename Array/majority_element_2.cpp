#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int element1 = INT_MIN;
        int element2 = INT_MIN;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0;i<nums.size();i++){
            if(element1 == nums[i]){
                count1++;
            }
            else if(element2 == nums[i]){
                count2++;
            }
            else if(count1 == 0 ){
                count1++;
                element1 = nums[i];
            }
            else if(count2 == 0){
                count2++;
                element2 = nums[i];
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == element1){
                count1++;
            }
            else if(nums[i] == element2){
                count2++;
            }
        }

        int n = nums.size()/3;

        if(count1 > n){
            ans.push_back(element1);
        }

        if(count2 > n){
            ans.push_back(element2);
        }

        return ans;
    }
};

// --> Solved on LeetCode(229)