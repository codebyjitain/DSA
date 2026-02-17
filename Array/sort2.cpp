#include<bits/stdc++.h>
#include "print_array.h"

using namespace std;

// Quick Sort --> patition is better then quick function for same work
// int partition(vector<int>& arr, int low, int high) {
//         int pivot = arr[high];  // ✅ last element as pivot
//         int i = low - 1;

//         for (int j = low; j < high; j++) {
//             if (arr[j] <= pivot) {
//                 i++;
//                 swap(arr[i], arr[j]);
//             }
//         }
//         swap(arr[i + 1], arr[high]);
//         return i + 1;
//     }



int quick(vector<int>& arr,int s,int e){
    int pivot = s;
    int i = s;
    int j = e;
    while (i<j)
    {
        while (arr[i]<=arr[pivot] && i<=e-1){
            i++;
        }
        while (arr[j]>arr[pivot] && j>= s+1){
            j--;
        }
        
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[pivot],arr[j]);

    return j;
}


void quick_sort(vector<int>& arr,int s,int e){
    if(s>=e){
        return;
    }

    int pivot = quick(arr,s,e);
    quick_sort(arr,s,pivot-1);
    quick_sort(arr,pivot+1,e);
}











// merge sort
// void merge(vector<int> & arr,int s, int mid, int e){
//     vector<int> ans;
//     int left = s;
//     int right = mid+1;

//     while (left<=mid && right<= e)
//     {
//         if(arr[left] <= arr[right]){
//             ans.push_back(arr[left]);
//             left++;
//         }
//         else{
//             ans.push_back(arr[right]);
//             right++;
//         }
//     }

//     while (left<=mid)
//     {
//         ans.push_back(arr[left++]);
//     }
    
//     while (right<=e)
//     {
//         ans.push_back(arr[right++]);
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         arr[s+i] =  ans[i];
//     }
    
// }

// void merge_sort(vector<int>& arr,int s,int e){
//     if(s>=e){
//         return;
//     }

//     int mid = s + (e-s)/2;

//     merge_sort(arr,s,mid);
//     merge_sort(arr,mid+1,e);

//     merge(arr,s,mid,e);
// }

int main(){
    vector<int> arr = {4,3,2,5,6,1,1,4,6,7};
    quick_sort(arr,0,arr.size()-1);
    // merge_sort(arr,0,arr.size()-1);
    print_array(arr);
    return 0;
}