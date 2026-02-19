#include<bits/stdc++.h>

using namespace std;

void fibonnaci(int n,int a = 0,int b = 1){
    if(n == 0){
        return;
    }


    cout<<a<<" ";
    fibonnaci(n-1,b,a+b);
}

int main(){
    fibonnaci(5);
    return 0;
}