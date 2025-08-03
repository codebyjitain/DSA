#include<bits/stdc++.h>
#include "print_array.h"

using namespace std;

void reverse_array(vector<int> &arr){
    int s = 0;
    int e = arr.size()-1;

    while (s<e)
    {
        // first way
        arr[s] = arr[s] ^ arr[e];
        arr[e] = arr[s] ^ arr[e];
        arr[s] = arr[s] ^ arr[e];
        
        // second way
        // swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    print_array(arr);

    reverse_array(arr);

    print_array(arr);
    return 0;
}