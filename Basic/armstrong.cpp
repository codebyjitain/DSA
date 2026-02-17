#include<bits/stdc++.h>

using namespace std;

bool armstrong(int n){
    int length = (int)(log10(n) +1);
    int x = n;
    int sum = 0;
    while (x!= 0)
    {
        sum = sum + pow((x%10),length);
        x = x/10;
    }
    if(sum == n) return 1;
    return 0;
    
}

int main(){
    cout<<armstrong(371)<<endl;
    return 0;
}