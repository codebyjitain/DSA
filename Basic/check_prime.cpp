#include<bits/stdc++.h>

using namespace std;

bool prime(int n){
    for(int i = 2;i<sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<prime(71)<<endl;
    return 0;
}