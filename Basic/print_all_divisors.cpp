#include<bits/stdc++.h>

using namespace std;

vector<int> divisor(int n){
    vector<int> ans;
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i == 0){
            ans.push_back(i);
            if(i != n/i)
                ans.push_back(n/i);
        }
    }
    return ans;
    
}

int main(){
    vector<int> x = divisor(1024);
    sort(x.begin(),x.end());
    for(int i = 0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    return 0;
}