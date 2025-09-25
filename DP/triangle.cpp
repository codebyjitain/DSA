#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        // Start from second last row, go upwards
        for (int row = n - 2; row >= 0; row--) {
            for (int col = 0; col <= row; col++) {
                triangle[row][col] += min(triangle[row+1][col], triangle[row+1][col+1]);
            }
        }
        return triangle[0][0];
    }
};

// -->Solved on LeetCode(120)