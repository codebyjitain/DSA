#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long x = 1;
        ans.push_back(x);
        if(rowIndex+1>1){

            for(int i = 1;i<rowIndex+1;i++){
                x = x * (rowIndex+1-i)/i;
                ans.push_back(x);
            }

        }
        return ans;

    }
};

// --> Solved on LeetCode(119)