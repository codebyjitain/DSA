#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int start = -1;
        for(int i = arr.size()-2;i>=0;i--){
            if(arr[i] < arr[i+1]){
                start = i;
                break;
            }
        }
        
        if(start == -1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
     
        for(int i = arr.size()-1;i>=0;i--){
            if(arr[i] > arr[start]){
                swap(arr[i],arr[start]);
                break;
            }
        }
        
        reverse(arr.begin()+ start +1,arr.end());
        
    }
};


// --> Solved on GFG and LeetCode(31) and Coding Ninjas