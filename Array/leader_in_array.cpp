#include<bits/stdc++.h>

using namespace std;

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        
        int num = arr[arr.size()-1];
        ans.push_back(num);
        for(int i = arr.size()-2;i>=0;i--){
            if(arr[i] >= num){
                num = arr[i];
                ans.push_back(num);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

// --> Solved on GFG and Coding Ninjas