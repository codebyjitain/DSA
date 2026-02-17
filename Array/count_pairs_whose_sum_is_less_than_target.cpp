#include <bits/stdc++.h>
using namespace std;
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        
        int n = arr.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i<=j){
            int sum = arr[i] + arr[j];
            if(sum < target){
                ans += j-i;
                i++;
            }
            else if(sum >= target){
                j--;
            }
        }
        
        return ans;
        
    }
};

// --> Solved on GFG