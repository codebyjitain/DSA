#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int n){
    int ans = 0;
    while (n!=0)
    {
        ans = ans*10 + (n%10);
        n = n/10;
    }
    return ans;
}

int main(){

    int n = 123;
    cout<<reverseNumber(n)<<endl;
    return 0;
}