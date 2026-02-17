#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 1;i<=numRows;i++){
            vector<int> temp;
            int x = 1;
            temp.push_back(x);
            if(i>1){
                for(int j = 1;j<i;j++){
                    x = x * (i-j)/j;
                    temp.push_back(x);
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};

// --> Solved on LeetCode(118)