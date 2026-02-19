#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[],int size,int i= 0){
    if(i>=size){
        return;
    }

    int temp = arr[i];
    arr[i] = arr[size-1];
    arr[size-1] = temp;

    reverse(arr,size-1,i+1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}