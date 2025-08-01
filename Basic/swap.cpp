#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 10;
    int b = 20;
// using one extra variable 
    // int temp = a;
    // a = b;
    // b = temp;

    // cout<<"a: "<<a<<"   "<<"b: "<<b;

    // without using one extra variable

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"a: "<<a<<"   "<<"b: "<<b;

    return 0;
}