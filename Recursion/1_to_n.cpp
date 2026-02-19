#include<bits/stdc++.h>

using namespace std;

// for 1 to n
// void print(int n){
//     if(n == 0){
//         return;
//     }

//     print(n-1);
//     cout<<n<<endl;
// }

// for n to 1
void print(int n){
    if(n == 0){
        return;
    }

    cout<<n<<endl;
    print(n-1);
}

int main(){
    print(10);
    return 0;
}