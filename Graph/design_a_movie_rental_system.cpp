#include <bits/stdc++.h>
using namespace std;


class MovieRentingSystem {
    // price lookup
    unordered_map<int, unordered_map<int, int>> price; // shop -> movie -> price
    // available[movie] = set of (price, shop)
    unordered_map<int, set<pair<int,int>>> available;
    // rented movies = set of (price, shop, movie)
    set<tuple<int,int,int>> rented;
    
public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for (auto &e : entries) {
            int shop = e[0], movie = e[1], cost = e[2];
            price[shop][movie] = cost;
            available[movie].insert({cost, shop});
        }
    }
    
    vector<int> search(int movie) {
        vector<int> res;
        if (!available.count(movie)) return res;
        int cnt = 0;
        for (auto &p : available[movie]) {
            res.push_back(p.second); // shop
            if (++cnt == 5) break;
        }
        return res;
    }
    
    void rent(int shop, int movie) {
        int cost = price[shop][movie];
        available[movie].erase({cost, shop});
        rented.insert({cost, shop, movie});
    }
    
    void drop(int shop, int movie) {
        int cost = price[shop][movie];
        rented.erase({cost, shop, movie});
        available[movie].insert({cost, shop});
    }
    
    vector<vector<int>> report() {
        vector<vector<int>> res;
        int cnt = 0;
        for (auto &t : rented) {
            auto [cost, shop, movie] = t;
            res.push_back({shop, movie});
            if (++cnt == 5) break;
        }
        return res;
    }
};


// -->Solved on LeetCode(1912)(try it yourself again)