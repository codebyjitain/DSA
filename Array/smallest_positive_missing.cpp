#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        vector<int> check(n+1,0);
        
        for(int i = 0;i<n;i++){
            if(arr[i]>0 && arr[i]<n+1){
                check[arr[i]] = 1; 
            }
        }
        int ans = 0;
        for(int i = 1;i<=n;i++){
            if(check[i] != 1){
                return i;
            }
        }
        
        return n+1;
    }
};

// --> Solved on GFG