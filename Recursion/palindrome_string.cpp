#include<bits/stdc++.h>

using namespace std;

bool check(string s,int size,int i = 0){
    if(i >= size){
        return 1;
    }

    if(s[i] != s[size-1]){
        return 0;
    }

    return check(s,i+1,size-1);
}

int main(){
    string s = "ABDBAasas";
    cout<<check(s,9)<<endl;

    return 0;

}