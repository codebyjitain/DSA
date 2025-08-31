#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>& arr, int k,int s,int i ,int n,int & ans){
	if(i>=n){
		if(s == k){
			ans++;
		}
		return;
	}

	
	solve(arr,k,s,i+1,n,ans);
	
	solve(arr,k,s+ arr[i],i+1,n,ans);

	
	
}

// --> Good But Will Fucked in Large Test Cases use Dp for it