#include <bits/stdc++.h>

using namespace std;

int findMajorityElement(int arr[], int n) {
	int element = 0;
	int count = 0;
	for(int i = 0;i <n;i++){
		if(count == 0){
			element = arr[i];
			count++;
		}
		else if(arr[i] == element){
			count++;
		}else{
			count--;
		}
	}

	if(count == 0){
		return -1;
	}
	count = 0;
	for(int i = 0;i<n;i++){
		if(element == arr[i]){
			count++;
		}
	}

	if(count>n/2){
		return element;
	}

	return -1;
}

// --> Solved on Coding Ninjas & LeetCode(169  )
// --> This algo is Moose Voting Algorithm(Optimal Solution)
// --> Can Also Be Solved Using Hasmap 