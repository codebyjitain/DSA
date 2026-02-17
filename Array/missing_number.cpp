#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int x = (size * (size+1))/2;

        for(int i = 0;i<size;i++){
            x = x-nums[i];
        }
        return x;

    }
};

// --> Solved on Leetcode(268)

// class Solution {
//   public:
//     int missingNum(vector<int>& arr) {
//         int size = arr.size();
//         int x = 0;
//         int count = 1;
//         for(int i = 0;i<size;i++){
//             x += count;
//             x = x- arr[i];
//             count++;
//         }
//         x += size+1;
//         return x;
        
//     }
// };

// -->   (Better) Solved on GFG can also use xor