#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size,0);
        int i = 0;
        int j = 1;

        for(int k = 0;k<size;k++){
            if(nums[k] >= 0){
                ans[i] = nums[k];
                i += 2;
            }
            else{
                ans[j] = nums[k];
                j += 2;
            }
        }

        return ans;

    }
};

// --> Solved on LeetCode(2149)



void posAndNeg(vector<int> &arr)
{
    vector<int> pos;
    vector<int> neg;

    for(int i = 0;i<arr.size();i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }

    int i = 0;
    int j = 0;
    for(int k = 0;k<arr.size();k++){
        if(k % 2 ==0){
            arr[k] = pos[i];
            i++;
        }
        else{
            arr[k] = neg[j];
            j++;
        }
    }
}
// Alternate Positive and Negative on Coding Ninjas