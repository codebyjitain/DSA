#include <bits/stdc++.h>
using namespace std;

class Spreadsheet {
    unordered_map<string, int> cells;
    int rows;
    
    // Helper: check if string is a number
    bool isNumber(const string &s) {
        return !s.empty() && all_of(s.begin(), s.end(), ::isdigit);
    }
    
    // Helper: get value from either number or cell reference
    int getCellOrNumber(const string &token) {
        if (isNumber(token)) {
            return stoi(token);
        }
        // If cell not set, default = 0
        return cells.count(token) ? cells[token] : 0;
    }

public:
    Spreadsheet(int rows): rows(rows) {}
    
    void setCell(string cell, int value) {
        cells[cell] = value;
    }
    
    void resetCell(string cell) {
        cells[cell] = 0; // or cells.erase(cell);
    }
    
    int getValue(string formula) {
        // formula is like "=X+Y"
        formula = formula.substr(1); // remove '='
        
        size_t plusPos = formula.find('+');
        string left = formula.substr(0, plusPos);
        string right = formula.substr(plusPos + 1);
        
        int x = getCellOrNumber(left);
        int y = getCellOrNumber(right);
        
        return x + y;
    }
};



// --> Solved on leetCode(3484) Try Later