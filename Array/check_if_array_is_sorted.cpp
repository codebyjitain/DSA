#include<bits/stdc++.h>

using namespace std;

int isSorted(int n, vector<int> a) {
    

    for(int i = 0;i<n-1;i++){
        if(a[i+1] < a[i]){
            return (int)0;
        }
    }
    return (int)1;
}

// --> Solved on coding Ninjas
