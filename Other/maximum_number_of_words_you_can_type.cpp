#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans = 0;
        int check[26];

        for(int i = 0;i<brokenLetters.length();i++){
            check[brokenLetters[i] - 'a'] = 1;
        }

        vector<string> s;
        string x = "";
        for(int i = 0;i<text.length();i++){
            if(text[i] == ' '){
                s.push_back(x);
                x = "";
            }else{
                x += text[i];
            }
        }
        s.push_back(x);
        for(auto word: s){
            bool flag = false;
            for(int i = 0;i<word.length();i++){
                if(check[word[i]-'a'] == 1){
                    flag = true;
                }
            }
            if(flag == false){
                ans++;
            }
        }

       return ans;
    }
};


// --> SOlved on LeetCode(1935)