#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    int ans = 1;
    for (int i = 0; i < 30; i++)
    {
        if(ans == n){
            return true;
        }
        ans = ans*2;
    }
    return false;
    
}


int main(){
    int n = 20;
    cout<<check(n);

    return 0;
}