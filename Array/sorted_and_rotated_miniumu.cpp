#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s+ (e-s)/2;
        while(s<e){
            if(arr[mid] > arr[e]){
                s = mid+1;
            }else{
                e = mid;
            }
            
            mid = s+ (e-s)/2;
        }
        return arr[s];
    }
};

// --> Solved on GFG