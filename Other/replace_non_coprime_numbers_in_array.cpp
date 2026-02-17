#include<bits/stdc++.h>

using namespace std;

class Solution {
    long long gcd(int a,int b){
        while(b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }

        return a;
    }
    long long lcm(int a,int b){
        return (a / gcd(a, b)) * b;
    }
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> st;  // use long long to avoid overflow
        for (int num : nums) {
            st.push_back(num);

            // keep merging while top two are non-coprime
            while (st.size() > 1) {
                long long a = st.back(); 
                long long b = st[st.size()-2];
                long long g = gcd(a, b);

                if (g > 1) {
                    st.pop_back();
                    st.pop_back();
                    st.push_back(lcm(a, b));
                } else {
                    break;
                }
            }
        }

        // convert back to int (guaranteed ≤ 1e8 by problem statement)
        vector<int> result(st.begin(), st.end());
        return result;
    }
};


// -->Solved on LeetCode(2197)