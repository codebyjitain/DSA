// Minimum Cost To Make String Valid
#include <bits/stdc++.h> 

using namespace std;

int findMinimumCost(string str) {
  if(str.length()%2!=0){
    return -1;
  }
  stack<char> st;

  for(int i =0;i<str.length();i++){
    if(str[i] == '}' && !st.empty() && st.top()=='{'){
      st.pop();
    }
    else{
      st.push(str[i]);
    }
  }
  if(st.empty()){
    return 0;
  }
  else{
    int a =0;
    int b =0;
    while(!st.empty()){
      if(st.top() =='{')
        a++;
      else
        b++;
      
      st.pop();
    } 
    return ((a+1)/2) + ((b+1)/2);
  }
}
