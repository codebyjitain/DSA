#include <bits/stdc++.h>
#include "print_array.h"

using namespace std;

vector<int> intersection_array(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;

    // first approach
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     for (int j = 0; j < arr2.size(); j++)
    //     {
    //         if(arr1[i] == arr2[j]){
    //             ans.push_back(arr1[i]);
    //             arr2[j] = INT_MIN;
    //         }
    //     }
    // }

    // optimized approach -- write for it
    int i = 0;
    int j = 0;

    while (i<arr1.size())   
    {
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    
    
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {1,2,3,7, 8, 9};
    vector<int> ans = intersection_array(arr1, arr2);
    print_array(ans);
    return 0;
}