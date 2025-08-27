#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int j;
        bool flag = false;
        for(i = 0;i<nums.size();i++){
            for(j = i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    flag = true;
                    break;
                }
            }
            if(flag == true){
                break;
            }
        }

        return {i,j};
        
    }
};

// --> Solved on LeetCode(1) --> Also can Solve using HashMap and Using Two Pointer After Sorting but only useful When index not needed



string read(int n, vector<int> book, int target)
{
    int i = 0;
    int j = n-1;
    sort(book.begin(),book.end());
    while(i<j){
        if(book[i]+book[j]<target){
            i++;
        }
        else if(book[i] + book[j] == target){
            return "YES";
        }
        else{
            j--;
        }
    }
    return "NO";
}


// --> Two Some on Coding Ninjas With Two Pointers Approach