#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 123;
    int ans = 0;
    while (n!= 0)
    {
        ans = (n%10) + ans*10;
        n = n/10;
    }

    cout<<ans;
    
    return 0;
}