#include <bits/stdc++.h>

using namespace std;

char find_unique(vector<char> arr){
    char ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    
}

int main(){
    vector<char> arr = {'a','b','c','a','c','d','b'};
    cout<<find_unique(arr);
    return 0;
}