#include<bits/stdc++.h>
#include "print_array.h"

using namespace std;

void swap_alternate(vector<int>& arr){
    for (int i = 0; i < arr.size()-1; i+=2)
    {
        arr[i] = arr[i] ^ arr[i+1];
        arr[i+1] = arr[i] ^ arr[i+1];
        arr[i] = arr[i] ^ arr[i+1];
        
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    swap_alternate(arr);
    print_array(arr);
    return 0;
}