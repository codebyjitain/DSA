#include<bits/stdc++.h>

using namespace std;

int printSum(int n){
    if(n == 0 || n== 1){
        return 1;
    }

    return n + printSum(n-1);
}

int main(){
    int n = printSum(10);
    cout<<n<<endl;
    return 0;
}