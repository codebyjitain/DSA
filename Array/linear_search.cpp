#include<bits/stdc++.h>

using namespace std;

int linear_search(vector<int> arr,int target){
    for (int i = 0; i < arr.size(); i++)
    {
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout<<linear_search(arr,4);
    return 0;
}