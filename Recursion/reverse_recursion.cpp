#include<bits/stdc++.h>
#include "print_array.h"
using namespace std;

// void reverse(vector<int>& arr,int s, int e){
//     if(s>=e){
//         return;
//     }

//     swap(arr[s],arr[e]);
//     reverse(arr,++s,--e);

// }

bool palindrome(string str,int s,int e){
    if(s>=e){
        return true;
    }

    if(str[s] != str[e]){
        return false;
    }
    
    return palindrome(str,++s,--e);

}


int main(){
    string str = "nitin";
    cout<<palindrome(str,0,str.length()-1);



    // vector<int> arr = {1,2,3,4,5,6};
    // reverse(arr,0,arr.size()-1);
    // print_array(arr);
    return 0;
    
}