#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();
        
        // for min and max kadane algo
        auto kadane = [&](bool findmin){
            int best = arr[0];
            int curr = arr[0];
            for(int i = 1;i<n;i++){
                if(findmin){
                    curr = min(arr[i],curr + arr[i]);
                    best = min(best,curr);
                }else{
                    curr = max(arr[i],curr+arr[i]);
                    best = max(best,curr);
                }
            }
            return best;
        };
        
        int maxi = kadane(false);
        int mini = kadane(true);
        int total = 0;
        for(auto x:arr) total+=x;
        
        if(maxi<0) return maxi;
        
        return max(maxi,total-mini);
        
    }
};

// --> Solved on GFG by using Kadane's Algo