#include <bits/stdc++.h> 

using namespace std;
int largestElement(vector<int> &arr, int n) {
    int ans = arr[0];
    for(int i = 1;i<n;i++){
        if(ans < arr[i]){
            ans = arr[i];
        }
    }
    return ans;
}


// --> Solved on coding Ninjas