#include<bits/stdc++.h>

using namespace std;

long long factorial(int n){
    if( n== 0 || n== 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    long long n = factorial(10);
    cout<<n<<endl;
    return 0;
}