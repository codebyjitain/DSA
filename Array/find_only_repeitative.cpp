#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        int x = 0;
        int y = arr[0];
        for(int i = 1;i<n;i++){
            x = x^i;
            y = y^arr[i];
        }
        
        int ans = x^y;
        
        return ans;
        
        
    }
};
// -->Solved on GFG