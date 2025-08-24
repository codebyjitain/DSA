#include <bits/stdc++.h> 

using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    
    arr.push_back(arr[0]);
    for(int i =0;i<n;i++){
        arr[i] = arr[i+1];
    }
    arr.pop_back();
    return arr;
}


// --> Solved on Coding Ninjas