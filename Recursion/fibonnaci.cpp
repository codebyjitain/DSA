#include<bits/stdc++.h>

using namespace std;

int fibonnaci(int n){
    if(n <= 1){
        return n;
    }

    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main(){
    cout<<fibonnaci(10);
    return 0;
}