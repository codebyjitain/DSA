#include<bits/stdc++.h>
using namespace std;

// Sum of first N numbers -> functional
int sum(int n){
    if(n==0){
        return n ;
    }
    return n + sum(n-1);
}


// Sum of first N numbers -> parameterized
// int sum(int n , int result){
//     if(n==0){
//         return result;
//     }
//     return sum(n-1,result+n);
// }

int main(){
    
    cout<<sum(3);
    return 0;
}