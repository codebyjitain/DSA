#include<bits/stdc++.h>

using namespace std;

// problem in this code

int find_duplicate(vector<int> arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = arr[i] ^ ans;
    }
    int calc = 0;
    for (int i = 1; i < arr.size()-1; i++)
    {
        calc = arr[i] ^ calc;
    }

    return ans^calc;
    
}

int main(){
    vector<int> arr = {1,2,3,3,4,5};

    cout<<find_duplicate(arr);

    return 0;
}