#include <bits/stdc++.h>
using namespace std;

class Solution {
    void merge(vector<int> &arr,int s,int mid,int e,int &ans){
        int j = mid+1;
        for(int i=s; i<=mid; i++){
            while(j<=e && (long long)arr[i] > 2LL*arr[j]){
                j++;
            }
            ans += (j - (mid+1));
        }
        
        int left = s;
        int right = mid+1;
        
        vector<int> temp;
        
        while(left<=mid && right<=e){
            if(arr[left]<= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
                left++;
        }
        
        while(right<=e){
            temp.push_back(arr[right]);
                right++;
        }
        
        for(int i = 0;i<temp.size();i++){
            arr[s+i] = temp[i];
        }
        
    }
    void mergeSort(vector<int> &arr,int s,int e,int &ans){
        if(s>=e){
            return;
        }
        int mid = s+(e-s)/2;
        mergeSort(arr,s,mid,ans);
        mergeSort(arr,mid+1,e,ans);
        
        merge(arr,s,mid,e,ans);
    }
  public:
    int countRevPairs(vector<int> &arr) {
        int ans = 0;
        int n = arr.size();
        
        mergeSort(arr,0,n-1,ans);
        return ans;
        
    }
};

// -->Solved on GFG