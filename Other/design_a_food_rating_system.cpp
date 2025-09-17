#include <bits/stdc++.h>
using namespace std;

struct Comp {
    bool operator()(const pair<int,string>& a, const pair<int,string>& b) const {
        if (a.first == b.first)
            return a.second > b.second; // lexicographically smaller comes first
        return a.first < b.first; // higher rating first
    }
};

class FoodRatings {
public:
    unordered_map<string, string> foodToCuisine; 
    unordered_map<string, int> foodToRating;     
    unordered_map<string, priority_queue<pair<int,string>, vector<pair<int,string>>, Comp>> cuisineToPQ;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for (int i = 0; i < n; i++) {
            foodToCuisine[foods[i]] = cuisines[i];
            foodToRating[foods[i]] = ratings[i];
            cuisineToPQ[cuisines[i]].push({ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        foodToRating[food] = newRating;
        string cuisine = foodToCuisine[food];
        cuisineToPQ[cuisine].push({newRating, food});
    }
    
    string highestRated(string cuisine) {
        auto &pq = cuisineToPQ[cuisine];
        while (!pq.empty()) {
            auto top = pq.top();
            if (foodToRating[top.second] == top.first) 
                return top.second; // valid
            pq.pop(); // outdated
        }
        return "";
    }
};


// --> Solved on LeetCode(2353) (try to undersatnd later)