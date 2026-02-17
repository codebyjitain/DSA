#include<bits/stdc++.h>

using namespace std;

// bruteforce
bool checkPalindrome(int n){
    int pal = 0;
    int x = n;
    while(x!= 0){
        pal = pal*10 + (x%10);
        x = x/10;
    }
    if(pal == n) return 1;
    return 0;
}


int main(){
    int n = 45542;
    cout<<checkPalindrome(n)<<endl;
    return 0;
}