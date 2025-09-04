#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int last = INT_MIN;
        int ans = 1;
        int count = 0;
        int i = 0;
        while(i<n){
            if(arr[i] - 1 == last){
                count++;
                last = arr[i];
            }
            else if(last != arr[i]){
                count =1;
                last = arr[i];
            }
            ans = max(ans,count);
            i++;
        }
        
        return ans;
        
    }
};

// --> Solved on GFG