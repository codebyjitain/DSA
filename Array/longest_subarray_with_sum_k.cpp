#include <bits/stdc++.h>

using namespace std;

int getLongestSubarray(vector<int> &a, int k)
{
    map<long long, int> pre;
    long long sum = 0;
    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            ans = max(ans, i + 1);
        }

        long long rem = sum - k;

        if (pre.find(rem) != pre.end())
        {
            int x = i - pre[rem];
            ans = max(ans, x);
        }

        if (pre.find(sum) == pre.end())
        {
            pre[sum] = i;
        }
    }
    return ans;
}

// --> Solved on coding Ninjas
int get(vector<int>& nums,int k){

    int i = 0;
    int j = 0;
    long long sum = 0;
    int ans = 0;
    
    while (j < nums.size())
    {
        sum += nums[j];
        
        if (sum == k)
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            sum = sum - nums[i] - nums[j];
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

// -> Better Approach --> more better approach available