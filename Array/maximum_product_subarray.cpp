#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int ans = INT_MIN;
        int prefix = 1;
        int suffix = 1;
        int n = arr.size();
        bool flag = false;
        for(int i = 0;i<n;i++){
            if(arr[i] == 0){
                prefix = 1;
                flag = true;
            }else{
                prefix *= arr[i];
                ans = max(prefix,ans);
            }
            
            if(arr[n-i-1] == 0){
                suffix = 1;
            }
            else{
                suffix *= arr[n-i-1];
                ans = max(suffix,ans);
            }
        }
        
        if(ans <0 && flag){
            ans = 0;
        }
        
        return ans;
    }
};

// -->Solved on GFG