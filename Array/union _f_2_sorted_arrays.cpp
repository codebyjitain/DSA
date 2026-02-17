#include<bits/stdc++.h>

using namespace std;


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int i = 0;
        int j = 0;
        int n = a.size();
        int m = b.size();
        
        while(i<n && j<m){
            if(a[i] <= b[j]){
                if(ans.size() == 0 || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }
            else{
                if(ans.size() == 0 || ans.back() != b[j]){
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n){
            
                if(ans.size() == 0 || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            
        }
        
        while(j<m){
            if(ans.size() == 0 || ans.back() != b[j]){
                    ans.push_back(b[j]);
                }
                j++;
        }
        return ans;
        
        
    }
};


// --> Solved on GFG