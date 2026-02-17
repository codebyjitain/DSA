#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";
        
        string result;
        
        // Handle sign
        if ((numerator < 0) ^ (denominator < 0)) result += "-";
        
        // Use long long to prevent overflow
        long long n = llabs((long long)numerator);
        long long d = llabs((long long)denominator);
        
        // Integer part
        result += to_string(n / d);
        long long rem = n % d;
        if (rem == 0) return result;  // No fractional part
        
        result += ".";
        
        // Map to store remainder -> position in result string
        unordered_map<long long, int> remainderPos;
        
        while (rem != 0) {
            if (remainderPos.find(rem) != remainderPos.end()) {
                // Found repeating remainder
                result.insert(remainderPos[rem], "(");
                result += ")";
                break;
            }
            
            remainderPos[rem] = result.size();
            rem *= 10;
            result += to_string(rem / d);
            rem %= d;
        }
        
        return result;
    }
};

// -->Solved on LeetCode(166)