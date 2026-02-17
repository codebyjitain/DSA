#include<bits/stdc++.h>

using namespace std;


long long maxSubarraySum(vector<int> arr, int n)
{
    long long ans = INT_MIN;
    long long sum = 0;
    for(int i = 0;i<n;i++){
        if(sum<0){
            sum = 0;
        }
        
        sum += arr[i];
        ans = max(ans,sum); 
        
    }
    // When ask for empty subarray also
    if(ans <0){
        return 0;
    }
    return ans;
}

// --> Solved on Coding Ninjas & LeetCode(53)
// This algo is Known as Kanade's Algo.