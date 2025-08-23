#include <bits/stdc++.h>
#include "print_array.h"

using namespace std;


// Insertion Sort using Recursion
void insertion_sort_using_recursion(vector<int> & arr,int start){
    if(start >= arr.size()){
        return;
    }
    int x = start;
    while (x>0 && arr[x-1]>arr[x])
    {
        swap(arr[x],arr[x-1]);
        x--;
    }
    insertion_sort_using_recursion(arr,start+1);
    
}



// Bubble Sort using Recursion
// void bubble_sort_using_recursion(vector<int>& arr,int end){
//     if(end <= 0){
//         return;
//     }
//     bool x = false;
//     for (int i = 0; i < end; i++)
//     {
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//             x = true;
//         }
//     }

//     if(x==false) return;
    
//     bubble_sort_using_recursion(arr,end-1);
// }



// Insertion sort
// void insertion_sort(vector<int>& arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int j  = i;
//         while (j>0 && arr[j-1] > arr[j])
//         {
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//     }
    
// }








// Bubble sort
// void bubble_sort(vector<int>& arr){
    
//     for (int i = 0; i < arr.size()-1; i++)
//     {
//         bool x = false;
//         for (int j = 0; j < arr.size()-1-i; j++)
//         {
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 x = true;
//             }
         
//         }
//         if(x == false){
//             break;
//         }
        
//     }
    
// }




// Selection sort
// void selection_sort(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int mini = i;
//         for (int j = i; j < arr.size() ; j++)
//         {
//             if (arr[mini] > arr[j])
//             {
//                 mini = j;
//             }
//         }
//         swap(arr[i], arr[mini]);
//     }
// }

int main()
{
    vector<int> arr = {3, 2, 5, 7, 3, 2, 5, 1};
    // vector<int> arr = {1,2,3,4,5,6,7,8};

    insertion_sort_using_recursion(arr,0);
    // bubble_sort_using_recursion(arr,arr.size()-1);
    // insertion_sort(arr);
    // bubble_sort(arr);
    // selection_sort(arr);
    print_array(arr);
    return 0;
}