#include<bits/stdc++.h>

using namespace std;

class Solution {
    void reverse(vector<int>& arr,int i ,int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(k>size){
            k = k%size;
        }
        reverse(nums,0,size-k-1);
        reverse(nums,size-k,size-1);
        reverse(nums,0,size-1);

        
    }
};

// Solved on LeetCode