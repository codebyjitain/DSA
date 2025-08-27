#include<bits/stdc++.h>
#include "print_array.h"

using namespace std;

void sub_sequence(vector<int> arr, vector<vector<int>>& ans,int n,int i,vector<int> temp){
    if(i>=n){
        ans.push_back(temp);
        return;
    }
    sub_sequence(arr,ans,n,i+1,temp);
    temp.push_back(arr[i]);
    sub_sequence(arr,ans,n,i+1,temp);
    temp.pop_back();
    
}




int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans ;
    vector<int> temp;
    sub_sequence(arr,ans,arr.size(),0,temp);
    

    print_array2(ans);
    return 0;
}