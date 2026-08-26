#include<bits/stdc++.h>

using namespace std;

// using tabulation
int fib_using_tabul(int n){
    if(n<=1){
        return n;
    }

    int a = 0;
    int b = 1;
    int ans = 0;
    for(int i = 2;i<=n;i++){
        ans = a+b;
        a = b;
        b = ans;
    }
    return ans;   
}




// using memoization
int fib(int n,vector<int> & dp_arr){
    if(n<=1){
        return n;
    }

    if(dp_arr[n] != -1){
        return dp_arr[n];
    }
    dp_arr[n] = fib(n-1,dp_arr) + fib(n-2,dp_arr);

    return dp_arr[n];
}

int main(){
    // vector<int> dp_arr(20,-1);
    int x = fib_using_tabul(19);
    cout<<x<<endl;
    return 0;
}