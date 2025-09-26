#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<int> ans;
        int i = 1;
        while(i!=k+1){
            ans.push_back(arr[n-i]);
            i++;
        }
        return ans;
        
    }
};

// --.Solved on GFG