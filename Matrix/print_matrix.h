#include<bits/stdc++.h>

using namespace std;

void print_matrix(vector<vector<int>> matrix){
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
        
    }
    
}