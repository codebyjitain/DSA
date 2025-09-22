#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int j = 0;
        int n = a.size();
        int m = b.size();
        int i = n-1;
        while(i>=0 && j<m){
            if(a[i] > b[j]){
                swap(a[i],b[j]);
                i--;
                j++;
            }
            else if(a[i] <= b[j]){
                break;
            }
        }
        
        sort(a.begin(),a.end());
        
        sort(b.begin(),b.end());
                
    }
};

// -->Solved on GFG

class Solution {
    private:
    void swapTo(vector<int>& a, vector<int>& b,int ind1,int ind2){
        if(a[ind1]>b[ind2]){
            swap(a[ind1],b[ind2]);
        }
    }
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        
        int size = (n+m);
        int gap = (size/2)+(size%2);
        
        while(gap > 0){
            
            int left = 0;
            int right = gap+left;
            
            while(right<size){
                
                if(left<n && right >=n){
                    swapTo(a,b,left,right-n);
                }
                else if(left >=n){
                    swapTo(b,b,left-n,right-n);
                }
                else{
                    swapTo(a,a,left,right);
                }
                left++;
                right++;
            }
            if(gap == 1) break;
            gap = (gap/2) + (gap%2);
            
        }
        
    }
};

// --> Solved using Gap Method (also optimized)