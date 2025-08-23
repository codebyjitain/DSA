#include <bits/stdc++.h> 

using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    int large = arr[0];
    int ans = INT_MIN;
    for(int i = 1;i<n;i++){
        if(arr[i] > large){
            ans = large;
            large = arr[i];
        }
        else if(arr[i] > ans && arr[i]<large){
            ans = arr[i];
        }
    }
    if(ans == INT_MIN){
        return -1;
    }

    return ans;
}


// --> Solved on coding Ninjas