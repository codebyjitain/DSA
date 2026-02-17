#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// -->Using Euclidean Algorithm

int lcm(int a,int b){
    return (a / gcd(a,b))*b;
}

int main(){
    int a = 10;
    int b = 20;
    cout<<gcd(a,b)<<endl;
    return 0;
}