#include<bits/stdc++.h>

using namespace std;


void solve(vector<int> arr,vector<int>& ans,int sum,int i,int n){
	if(i>=n){
		ans.push_back(sum);
		return;
	}

	solve(arr,ans,sum,i+1,n);
	sum+= arr[i];
	solve(arr,ans,sum,i+1,n);
	sum-= arr[i];
}


vector<int> subsetSum(vector<int> &num){
	vector<int> ans;
	solve(num,ans,0,0,num.size());
	sort(ans.begin(),ans.end());

	return ans;
}

// --> solved on Coding Ninjas