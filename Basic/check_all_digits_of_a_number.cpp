#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

// bruteforce approach
// int countDigit(int n){
//     int count = 0;
//     while(n!=0){
//         n= n/10;
//         count++;
//     }
//     return count;
// }

int countDigit(int n){
    return (int)(log10(n) +1);
}


int main(){
    int n = 283793;
    cout<<countDigit(n)<<endl;
    return 0;
}